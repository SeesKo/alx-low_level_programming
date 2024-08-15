#include "main.h"

/**
 * print_error - Prints an error message and exits with a status code of 98.
 * @msg: The error message to be printed.
 */
void print_error(const char *msg)
{
	write(STDERR_FILENO, msg, sizeof(msg));
	exit(98);
}

/**
 * print_hex - Prints the hexadecimal representation of a byte array.
 * @data: Pointer to the byte array.
 * @length: Number of bytes to print.
 */
void print_hex(unsigned char *data, size_t length)
{
	size_t i;

	for (i = 0; i < length; i++)
	{
		if (i != 0)
		{
			write(STDOUT_FILENO, " ", 1);
		}
		dprintf(STDOUT_FILENO, "%02x", data[i]);
	}
}

/**
 * display_elf_header - Displays information from the ELF header.
 * @e_ident: Pointer to the array containing the ELF identification data.
 */
void display_elf_header(unsigned char *e_ident)
{
	if (e_ident[0] != 0x7f || e_ident[1] != 0x45 || e_ident[2] != 0x4c
		|| e_ident[3] != 0x46)
	{
		print_error("Error: Not an ELF file\n");
	}

	/* ELF Header information */
	dprintf(STDOUT_FILENO, "ELF Header:\n");
	dprintf(STDOUT_FILENO, "  Magic:   ");
	print_hex(e_ident, 16);
	dprintf(STDOUT_FILENO, "\n");

	/* Class */
	dprintf(STDOUT_FILENO, "  Class:                             ");
	if (e_ident[4] == ELF32)
	{
		dprintf(STDOUT_FILENO, "ELF32\n");
	}
	else if (e_ident[4] == ELF64)
	{
		dprintf(STDOUT_FILENO, "ELF64\n");
	}
	else
	{
		dprintf(STDOUT_FILENO, "<unknown: %x>\n", e_ident[4]);
	}

	/* Data */
	dprintf(STDOUT_FILENO, "  Data:                              ");
	if (e_ident[5] == ELFDATA2LSB)
	{
		dprintf(STDOUT_FILENO, "2's complement, little endian\n");
	}
	else if (e_ident[5] == ELFDATA2MSB)
	{
		dprintf(STDOUT_FILENO, "2's complement, big endian\n");
	}
	else
	{
		dprintf(STDOUT_FILENO, "<unknown: %x>\n", e_ident[5]);
	}

	/* Version */
	dprintf(STDOUT_FILENO, "  Version:                           %d (current)\n",
		e_ident[6]);

	/* OS/ABI */
	dprintf(STDOUT_FILENO, "  OS/ABI:                            ");
	switch (e_ident[7])
	{
		case 0:
			dprintf(STDOUT_FILENO, "System V\n");
			break;
		case 1:
			dprintf(STDOUT_FILENO, "HP-UX\n");
			break;
		case 2:
			dprintf(STDOUT_FILENO, "NetBSD\n");
			break;
		case 3:
			dprintf(STDOUT_FILENO, "Linux\n");
			break;
		case 6:
			dprintf(STDOUT_FILENO, "Solaris\n");
			break;
		case 7:
			dprintf(STDOUT_FILENO, "AIX\n");
			break;
		case 8:
			dprintf(STDOUT_FILENO, "IRIX\n");
			break;
		case 9:
			dprintf(STDOUT_FILENO, "FreeBSD\n");
			break;
		case 10:
			dprintf(STDOUT_FILENO, "Tru64\n");
			break;
		case 11:
			dprintf(STDOUT_FILENO, "Novell Modesto\n");
			break;
		case 12:
			dprintf(STDOUT_FILENO, "OpenBSD\n");
			break;
		case 13:
			dprintf(STDOUT_FILENO, "OpenVMS\n");
			break;
		case 14:
			dprintf(STDOUT_FILENO, "NonStop Kernel\n");
			break;
		case 15:
			dprintf(STDOUT_FILENO, "AROS\n");
			break;
		case 16:
			dprintf(STDOUT_FILENO, "Fenix OS\n");
			break;
		default:
			dprintf(STDOUT_FILENO, "<unknown: %x>\n", e_ident[7]);
			break;
	}

	/* ABI Version */
	dprintf(STDOUT_FILENO, "  ABI Version:                       %d\n", e_ident[8]);

	/* Type */
	dprintf(STDOUT_FILENO, "  Type:                              ");
	if (e_ident[16] == 1)
	{
		dprintf(STDOUT_FILENO, "REL (Relocatable file)\n");
	}
	else if (e_ident[16] == 2)
	{
		dprintf(STDOUT_FILENO, "EXEC (Executable file)\n");
	}
	else if (e_ident[16] == 3)
	{
		dprintf(STDOUT_FILENO, "DYN (Shared object file)\n");
	}
	else if (e_ident[16] == 4)
	{
		dprintf(STDOUT_FILENO, "CORE (Core file)\n");
	}
	else
	{
		dprintf(STDOUT_FILENO, "<unknown: %x>\n", e_ident[16]);
	}

	/* Entry Point Address */
	dprintf(STDOUT_FILENO, "  Entry point address:               ");
	if (e_ident[4] == ELF32)
	{
		unsigned int entry_point = *(unsigned int *)&e_ident[24];

		dprintf(STDOUT_FILENO, "0x%x\n", entry_point);
	}
	else if (e_ident[4] == ELF64)
	{
		unsigned long entry_point = *(unsigned long *)&e_ident[24];

		dprintf(STDOUT_FILENO, "0x%lx\n", entry_point);
	}
}

/**
 * main - Entry point for the program.
 * @argc: The number of command-line arguments.
 * @argv: Array of command-line arguments.
 *
 * Return: 0 on success, or exits with a status code of 98 on failure.
 */
int main(int argc, char **argv)
{
	int fd;
	unsigned char e_ident[16];
	ssize_t bytes_read;

	if (argc != 2)
		print_error("Usage: elf_header elf_filename\n");

	fd = open(argv[1], O_RDONLY);
	if (fd == -1)
		print_error("Error: Can't open file\n");

	bytes_read = read(fd, e_ident, sizeof(e_ident));
	if (bytes_read < 0)
	{
		close(fd);
		print_error("Error: Can't read file\n");
	}
	else if (bytes_read < (ssize_t)sizeof(e_ident))
	{
		close(fd);
		print_error("Error: Incomplete ELF header\n");
	}

	close(fd);
	display_elf_header(e_ident);
	return (0);
}
