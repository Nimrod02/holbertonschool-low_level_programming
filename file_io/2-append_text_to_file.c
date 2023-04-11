#include "main.h"

/**
 * 
 * 
 * 
 * 
*/

int append_text_to_file(const char *filename, char *text_content)
{
	int openfile, writefile;

	if (filename == NULL)
		return (0);

	if (text_content == NULL)
		text_content = "";

	openfile = open(filename, O_APPEND| O_RDWR, 0600);

	writefile = write(openfile, text_content, strlen(text_content));

	if (writefile == -1 || openfile == -1)
		return (-1);

	return (1);
}
