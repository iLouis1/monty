#include "monty.h"

/**
 * f_pint - This prints the top
 * @head: This is the stack head
 * @counter: line_number
 * Retunr: return nothing
 */

void f_pint(stack_t **head, unsigned int counter)
{
	if (*head == NULL)
	{
		fprintf(stderr, "L%u: can't pint, stack empty\n", counter);
		fclose(bus.file);
		free(bus.content);

		free_stack(*head);
		exit(EXIT_FAILURE);
	}
	printf("%d\n", (*head)->n);
}
