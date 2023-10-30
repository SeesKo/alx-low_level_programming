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
	int descriptor;
	ssize_t bytes_read, bytes_written;
	char *data_buffer;

	if (filename == NULL)
		return (0);

	descriptor = open(filename, O_RDONLY);
	if (descriptor == -1)
		return (0);

	data_buffer = malloc(sizeof(char) * letters);
	if (data_buffer == NULL)
	{
		close(descriptor);
		return (0);
	}

	bytes_read = read(descriptor, data_buffer, letters);
	if (bytes_read == -1)
	{
		free(data_buffer);
		close(descriptor);
		return (0);
	}

	bytes_written = write(STDOUT_FILENO, data_buffer, bytes_read);
	if (bytes_written == -1 || bytes_written != bytes_read)
	{
		free(data_buffer);
		close(descriptor);
		return (0);
	}

	free(data_buffer);
	close(descriptor);

	return (bytes_written);
}
