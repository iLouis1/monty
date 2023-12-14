#include "monty.h"

/**
 * f_pstr - This will print the string starting from the top of
 * the stac
 * @head: This is the stack head
 * @counter: The line_number
 * Return: Will return nothing
 */

void f_pstr(stack_t **head, unsigned int counter)
{
	stack_t *h;
	(void)counter;
	h = *head;

	while (h)
	{
		if (h->n > 127 || h->n <= 0)
		{
			break;

		}
		printf("%c", h->n);
		h = h->next;
	}

	printf("\n");
}
