#include <stdio.h>
#include <stdlib.h>
#include "sort.h"

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
    int array[] = {19, 48, 99, 71, 13, 52, 96, 73, 86, 7};
    size_t n = sizeof(array) / sizeof(array[0]);

    print_array(array, n);
    printf("\n");
    selection_sort(array, n);
    printf("\n");
    print_array(array, n);
    return (0);
}

/**
 * main_0.c - Compile program
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {79, 47, 68, 87, 84, 91, 21, 32, 34, 2, 95, 31, 20, 22, 98, 39, 92, 41, 62, 1};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_1.c - case: array of 20 elements almost sorted
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {1, 22, 20, 21, 2, 31, 32, 34, 41, 39, 47, 79, 68, 62, 84, 87, 98, 92, 95, 91};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_2.c - case: array of 20 elements ordered in descending order
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {98, 95, 92, 91, 87, 84, 79, 68, 62, 47, 41, 39, 34, 32, 31, 22, 21, 20, 2, 1};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_3.c - case: array of 100 elements ordered randomly
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {966, 393, 729, 85, 957, 159, 819, 827, 816, 59, 226, 849, 71, 39, 155, 939, 459, 807, 951, 494, 189, 54, 958, 90, 195, 1000, 505, 259, 697, 651, 206, 84, 637, 254, 413, 773, 598, 49, 252, 584, 935, 976, 699, 572, 200, 949, 929, 80, 554, 847, 346, 383, 839, 172, 257, 124, 753, 860, 493, 134, 107, 467, 904, 835, 486, 808, 503, 945, 45, 17, 448, 783, 242, 246, 128, 62, 901, 575, 846, 872, 280, 786, 260, 14, 441, 688, 634, 409, 89, 323, 65, 300, 870, 289, 646, 519, 997, 211, 998, 64};
	size_t n = sizeof(array) / sizeof(array[0]);/* 100 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_4.c - case: array of 2 elements disordered
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {2, 1};
	size_t n = sizeof(array) / sizeof(array[0]);/* 2 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_5.c - case: array of 20 elements already sorted
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {1, 2, 20, 21, 22, 31, 32, 34, 39, 41, 47, 62, 68, 79, 84, 87, 91, 92, 95, 98};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_6.c - case: array of only 1 element
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {1};
	size_t n = sizeof(array) / sizeof(array[0]);/* 1 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}

/**
 * main_7.c - case: selection_sort(NULL, 0);
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	selection_sort(NULL, 0);
	return (0);
}

/**
 * main_8.c - case: array of 20 identical elements
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int array[] = {98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98, 98};
	size_t n = sizeof(array) / sizeof(array[0]);/* 20 */

	print_array(array, n);
	printf("\n");
	selection_sort(array, n);
	printf("\n");
	print_array(array, n);
	return (0);
}
