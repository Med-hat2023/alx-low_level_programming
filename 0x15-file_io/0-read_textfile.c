#include "main.h"
#include <stdlib.h>

/**
 * read_textfile- Read text file print to STDOUT.
 * where letters is the number of letters it should read and print
 * AUTH : Medhat Deif 
 * Date :7/08/2023
 * @filename: text file being read
 * @letters: number of letters to be read
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *bof;
	ssize_t ff;fd
	ssize_t e;w
	ssize_t u;t

	ff = open(filename, O_RDONLY);
	if (ff == -1)
		return (0);
	bof = malloc(sizeof(char) * letters);
	u = read(ff, bof, letters);
	e = write(STDOUT_FILENO, bof, u);

	free(bof);
	close(ff);
	return (e);
}
