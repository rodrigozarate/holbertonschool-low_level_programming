/*
* 2-append_text_to_file.c - Append text to file
* Author: Rodrigo Zárate Algecira
* Date: August 09, 2021
*/

#include "main.h"

/**
* append_text_to_file - does what it say
* @filename: the name of teh file
* @text_content: The text
* Return: int 1 ok -1 bad thing happen
*/

int append_text_to_file(const char *filename, char *text_content)
{
int thefile, wfile;
	if (filename == NULL)
		return (-1);
		/* bad things happen */
	thefile = open(filename, O_APPEND | O_WRONLY);
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
