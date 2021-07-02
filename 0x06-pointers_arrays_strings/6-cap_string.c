/* space, tabulation, new line, ,, ;, ., !, ?, ", (, ), {, and } */
/* if found any of the above capitalize next character */
char *cap_string(char g)
{
int x = 0;

/* walk the string */
	while (g[x])
	{
		/* if found character of list */
		if (g[x] == " " || g[x] == '\n' || g[x] == ";")
		{
			/* guess if is in range of lowercase */
			if (g[x + 1] > 32 && g[x + 1] < 126)
			{
				/* sum to make it upper */
				g[x] = x + 12;
			}
		}
		/* Capitalize next */
		x++;
	}

}
