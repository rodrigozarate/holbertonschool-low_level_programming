/*
* 1-create_file.c - Create file
* Author: Rodrigo Zárate Algecira
* Date: August 09, 2021
*/

#include "main.h"

/**
* create_file - Create a file
* @filename: name of file
* @text_content: the text to be stored if any
* Return: int
*/

int create_file(const char *filename, char *text_content)
{
int thefile, wfile;

	if (filename == NULL)
		return (-1);
		/* bad things happen */
	thefile = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (thefile == -1)
		return (-1);
		/* bad things happen */
	if (text_content)
	{
		wfile = write(thefile, text_content, strlen(text_content));
		if (wfile == -1)
		{
			close(thefile);
			return (-1);
			/* bad things happen */
		}
	}
close(thefile);
/* all ok*/
return (1);
}
