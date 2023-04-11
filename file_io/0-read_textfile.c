#include "main.h"

/**
 * read_textfile - main function that read and print a text file
 * @filename: the name of the file
 * @letters: contains the number of char
 *
 * Return: return the number of char print
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t file, rd, we;
	char *text;

	text = malloc(letters);

	if (text == NULL)
	{
		return (0);
	}

	if (filename == NULL)
		return (0);

	file = open(filename, O_RDONLY);

	if (file == -1)
	{
		free(text);
		return (0);
	}

	rd = read(file, text, letters);

	we = write(STDOUT_FILENO, text, rd);

	close(file);

	return (we);
}
