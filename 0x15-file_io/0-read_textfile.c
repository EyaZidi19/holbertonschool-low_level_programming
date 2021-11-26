#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: Is the file name to read
 * @letters: letters is the number of letters to obtain the buffer size
 * Return: the number of characters readed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t fdo, n_bites;

	if (filename == NULL)
		return (0);

	buffer = (char *) malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	fdo = open(filename, O_RDONLY);
	n_bites = read(fdo, buffer, letters);
	write(STDOUT_FILENO, buffer, n_bites);

	if (fdo == -1)
	{
		return (0);
	}
	free(buffer);
	close(fdo);
	return (n_bites);
}
