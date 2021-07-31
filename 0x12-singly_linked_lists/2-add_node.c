#include "lists.h"

/**
 * _slenght - lenght
 * @c:char
 * Return:int
 */
unsigned int _slenght(char *c)
{
int i;
/* walk the string */
	for (i = 0; c[i] != '\0'; i++)
	{
		continue;
	}
return (i);
}
/**
* add_node - Node in head
* @head: Head node
* @str: string
* Return: new node
*/
list_t *add_node(list_t **head, const char *str)
{
	list_t *newnode;

	if (str == NULL)
		return (NULL);
newnode = malloc(sizeof(list_t));
	if (newnode == NULL)
	{
		return (NULL);
	}
newnode->str = strdup(str);
	if (newnode->str == NULL)
	{
		free(newnode);
		return (NULL);
	}
newnode->len = _slenght(newnode->str);
newnode->next = *head;
*head = newnode;
return (newnode);
}
