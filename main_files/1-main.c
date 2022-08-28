#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
    listint_t *list;
    listint_t *node;
    int *tmp;

    list = NULL;
    while (size--)
    {
        node = malloc(sizeof(*node));
        if (!node)
            return (NULL);
        tmp = (int *)&node->n;
        *tmp = array[size];
        node->next = list;
        node->prev = NULL;
        list = node;
        if (list->next)
            list->next->prev = list;
    }
    return (list);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    listint_t *list;
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    list = create_listint(array, n);
    if (!list)
        return (1);
    print_list(list);
    printf("\n");
    insertion_sort_list(&list);
    printf("\n");
    print_list(list);
    return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_0.c - Compile program
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 95, 31, 20, 22, 98, 39, 92, 41, 62, 1};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_1.c - case: list of 20 elements almost sorted
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {1, 22, 20, 21, 2, 31, 32, 34, 41, 39, 47, 79, 68, 62, 84, 87, 98, 92, 95, 91};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_2.c - case: list of 20 elements ordered in descending order
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {98, 95, 92, 91, 87, 84, 79, 68, 62, 47, 41, 39, 34, 32, 31, 22, 21, 20, 2, 1};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_3.c - case: list of 100 elements ordered randomly
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {966, 393, 729, 85, 957, 159, 819, 827, 816, 59, 226, 849, 71, 39, 155, 939, 459, 807, 951, 494, 189, 54, 958, 90, 195, 1000, 505, 259, 697, 651, 206, 84, 637, 254, 413, 773, 598, 49, 252, 584, 935, 976, 699, 572, 200, 949, 929, 80, 554, 847, 346, 383, 839, 172, 257, 124, 753, 860, 493, 134, 107, 467, 904, 835, 486, 808, 503, 945, 45, 17, 448, 783, 242, 246, 128, 62, 901, 575, 846, 872, 280, 786, 260, 14, 441, 688, 634, 409, 89, 323, 65, 300, 870, 289, 646, 519, 997, 211, 998, 64};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_4.c - case: list of 2 elements disordered
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {2, 1};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_5.c - case: list of 20 elements already sorted
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {1, 2, 20, 21, 22, 31, 32, 34, 39, 41, 47, 62, 68, 79, 84, 87, 91, 92, 95, 98};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_6.c - case: list of only 1 element
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {1};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_7.c - case: insertion_sort(NULL);
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	insertion_sort_list(NULL);
	return (0);
}

#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main_8.c - case: list of 20 identical elements
 * create_listint - Creates a doubly linked list from an array of integers
 *
 * @array: Array to convert to a doubly linked list
 * @size: Size of the array
 *
 * Return: Pointer to the first element of the created list. NULL on failure
 */
listint_t *create_listint(const int *array, size_t size)
{
	listint_t *list;
	listint_t *node;
	int *tmp;

	list = NULL;
	while (size--)
	{
		node = malloc(sizeof(*node));
		if (!node)
			return (NULL);
		tmp = (int *)&node->n;
		*tmp = array[size];
		node->next = list;
		node->prev = NULL;
		list = node;
		if (list->next)
			list->next->prev = list;
	}
	return (list);
}

/**
 * is_doubly_linked - Check if a doubly linked list is corectly linked
 *
 * @list: Pointer to the first node of the list to check
 *
 * Return: 1 if the list is correctly formated, 0 otherwise
 */
int is_doubly_linked(const listint_t *list)
{
	const listint_t *prev;

	prev = list ? list->prev : NULL;
	while (list)
	{
		if (list->prev != prev)
			return (0);
		prev = list;
		list = list->next;
	}
	return (1);
}

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	listint_t *list;
	int array[] = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
	size_t n = sizeof(array) / sizeof(array[0]);

	list = create_listint(array, n);
	if (!list)
		return (1);
	print_list(list);
	printf("\n");
	insertion_sort_list(&list);
	printf("\n");
	print_list(list);
	if (!is_doubly_linked(list))
	{
		printf("The list is not correctly doubly linked !\n");
		return (1);
	}
	return (0);
}
