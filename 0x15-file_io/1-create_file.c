#include "main.h"

/**
 * create_file - Creates a file with specific permissions and writes content.
 * @filename: The Name of file to create.
 * @text_content: Text string to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */

int create_file(const char *filename, char *text_content)
{
	/* Declare variables */
	FILE *fptr;
	size_t txtlen = 0;
	size_t bytes_written;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	/* Calculate the length of text_content */
	while (text_content[txtlen] != '\0')
		txtlen++;

	/* Open file for writing */
	fptr = fopen(filename, "w");
	if (fptr == NULL)
		return (-1); /* File creation failed */

	/* Write text_content to the file */
	bytes_written = fwrite(text_content, 1, txtlen, fptr);
	fclose(fptr);

	if (bytes_written != txtlen)
		return (-1); /* bytes_written doesn't match txtlen */

	/* Set file permissions to -rw------- */
	if (chmod(filename, S_IRUSR | S_IWUSR) == -1)
		return (-1); /* chmod failed */

	return (1); /* Success */
}
