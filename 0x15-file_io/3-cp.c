#include "main.h"

/**
 * open_source_file - Opens the source file for reading.
 * @filename: The name of the source file.
 *
 * Return: The file descriptor for the opened file.
 * Exits with an error message and status code 98 on failure.
 */
int open_source_file(const char *filename)
{
	int source_fd = open(filename, O_RDONLY);

	if (source_fd == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	return (source_fd);
}

/**
 * open_destination_file - Opens the destination file for writing.
 * @filename: The name of the destination file.
 *
 * Return: The file descriptor for the opened file.
 * Exits with an error message and status code 99 on failure.
 */
int open_destination_file(const char *filename)
{
	int destination_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0664);

	if (destination_fd == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", filename);
		exit(99);
	}
	return (destination_fd);
}

/**
 * copy_file - Copies the content from the source file to the destination file.
 * @source_fd: The file descriptor of the source file.
 * @destination_fd: The file descriptor of the destination file.
 *
 * Return: 0 on success.
 * Exits with an error message and status code 99 or 98 on failure.
 */
int copy_file(int source_fd, int destination_fd)
{
	ssize_t bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(source_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(destination_fd, buffer, bytes_read);
		if (bytes_written == -1)
			exit(99);
	}

	return (0);
}

/**
 * set_permissions - Sets the permissions of the file to "rw-rw-r--".
 * @filename: The name of the file to set permissions for.
 *
 * Return: 0 on success.
 * Exits with an error message and status code 100 on failure.
 */
int set_permissions(const char *filename)
{
	if (chmod(filename, 0664) == -1)
	{
		dprintf(2, "Error: Can't change permissions of file %s\n", filename);
		exit(100);
	}
	return (0);
}

/**
 * main - The main function of the program.
 * @ac: The number of command-line arguments.
 * @av: An array of command-line argument strings.
 *
 * Return: 0 on success.
 * Exits with an error message and status code 97 on incorrect arguments.
 */
int main(int ac, char **av)
{
	int source_fd;
	int destination_fd;

	if (ac != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		exit(97);
	}

	source_fd = open_source_file(av[1]);
	destination_fd = open_destination_file(av[2]);

	copy_file(source_fd, destination_fd);

	set_permissions(av[2]);

	if (close(source_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", source_fd);
		exit(100);
	}

	if (close(destination_fd) == -1)
	{
		dprintf(2, "Error: Can't close fd %d\n", destination_fd);
		exit(100);
	}

	return (0);
}
