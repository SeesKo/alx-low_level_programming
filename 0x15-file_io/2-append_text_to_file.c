#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @* @filename: Name of file to append text to.
 * @text_content: Text string to add to the file.
 *
 * Return: 1 on success and -1 on failure.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	FILE *fptr;

	if (filename == NULL)
		return (-1);

	fptr = fopen(filename, "a");

	if (fptr == NULL)
		return (-1);

	if (text_content == NULL)
		fputs(text_content, fptr);

	fclose(fptr);

	return (1);
}
