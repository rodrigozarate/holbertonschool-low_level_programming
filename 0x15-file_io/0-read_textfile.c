/*
* 0-read_textfile.c - Reads the content of given file
* Author: Rodrigo Zárate Algecira
* Date: August 09, 2021
*/

#include "main.h"

/**
* freewilli - free mem
* @themem: the malloc
* Return: always 0
*/

int freewilli(char *themem)
{
	free(themem);
	return (0);
}

/**
* read_textfile - Reads the content of given file
* @filename: char filename
* @letters: size_t max letters to be written
* Return: number of printed chars
*/

ssize_t read_textfile(const char *filename, size_t letters)
{
char *alm;
int filetoread;
ssize_t rfile = 0;
ssize_t wfile = 0;

	if (filename == NULL)
		return (0);
	/* space in mem */
	alm = malloc(sizeof(char) * letters);
	if (alm == NULL)
		return (0);
	/* open the file */
	filetoread = open(filename, O_RDONLY);
	if (filetoread == -1)
	{
		freewilli(alm);
	}
	/* read chars until given size */
	rfile = read(filetoread, alm, letters);
	if (rfile == -1)
	{
		freewilli(alm);
	}
	wfile = write(STDOUT_FILENO, alm, rfile);
	if (wfile == -1)
	{
		freewilli(alm);
	}
free(alm);
/* close the file */
close(filetoread);
/* return number of chars */
return (wfile);
}
