int sum_dlistint(dlistint_t *head)
{
int sum = 0;
/* walk the nodes */
	while (head != NULL)
	{
		/* sum each node */
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
