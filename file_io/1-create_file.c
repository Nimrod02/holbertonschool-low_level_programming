#include "main.h"

/**
 * create_file - main function that create a file
 * @filename: pointer to the file name
 * @text_content: pointer use to write in the created file
 * Return: 1 for success or 0 for failure
*/
int create_file(const char *filename, char *text_content)
{
	int openfile, writefile;

	if (filename == NULL)
		return (0);

	openfile = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);

	writefile = write(openfile, text_content, strlen(text_content));

	if (writefile == 0 || filename == NULL)
		return (-1);

	return (1);
}
