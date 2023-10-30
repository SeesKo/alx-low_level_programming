#include "main.h"

/**
 * read_textfile - Reads text file and prints it to
 * POSIX std. output.
 * @filename: The name of the text file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: Number of letters it can read or print,
 * 0 on failure or error.
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	FILE *fptr;
	char *content = malloc(letters);
	ssize_t bytes_read;
	ssize_t bytes_written;

	if (filename == NULL || content == NULL)
	{
		if (content != NULL)
			free(content);
		return (0);
	}

	fptr = fopen(filename, "r");

	if (fptr == NULL) /* If file can't be opened*/
	{
		free(content);
		return (0);
	}

	bytes_read = fread(content, 1, letters, fptr);
	if (bytes_read <= 0) /* If read fails */
	{
		free(content);
		fclose(fptr);
		return (0);
	}

	bytes_written = fwrite(content, 1, bytes_read, stdout);
	free(content);
	fclose(fptr);

	/* If write fails or doesn't return expected amount */
	if (bytes_written != bytes_read)
		return (0);

	return (bytes_read);
}
