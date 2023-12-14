#include "monty.h"

/**
 * f_queue - This will print the top
 * @head: This is the stack head
 * @counter: The line_number
 * Return: Will return nothing
*/

void f_queue(stack_t **head, unsigned int counter)
{
	(void)head;
	(void)counter;
	bus.lifi = 1;
}

/**
 * addqueue - This will add node to the tail stack
 * @n: The new_value
 * @head: This is the head of the stack
 * Return: This will return nothing
*/

void addqueue(stack_t **head, int n)
{
	stack_t *new_node, *aux;

	aux = *head;
	new_node = malloc(sizeof(stack_t));

	if (new_node == NULL)
	{
		printf("Error\n");
	}
	new_node->n = n;
	new_node->next = NULL;

	if (aux)
	{
		while (aux->next)
			aux = aux->next;
	}

	if (!aux)
	{
		*head = new_node;
		new_node->prev = NULL;
	}

	else
	{
		aux->next = new_node;
		new_node->prev = aux;
	}
}
