#include "hash_tables.h"


/**
 * hash_table_print - hash_table_print
 * @ht: the hash table
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int number_of_keys = 0;
	unsigned long int index = 0;
	hash_node_t *tmp = NULL;

	if (!ht)
	{
		printf("{}\n");
		exit(1);
	}
	number_of_keys = count_keys(ht);
	putchar('{');
	for (; index < ht->size; index++)
	{
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				printf("'%s': '%s'\n", tmp->key, tmp->value);
				if (number_of_keys > 1)
					printf(", ");
				number_of_keys -= 1;
				tmp = tmp->next;
			}
		}
	}
	putchar('}');
	putchar('\n');
}

/**
 * count_keys - count_keys
 * @ht: the hash table
 *
 * Return: the number of keys
 */
unsigned long int count_keys(const hash_table_t *ht)
{
	unsigned long int number = 0, index = 0;
	hash_node_t *tmp = NULL;

	tmp = ht->array[index];

	for (; index < ht->size; index++)
		if (ht->array[index])
		{
			tmp = ht->array[index];
			while (tmp)
			{
				number += 1;
				tmp = tmp->next;
			}
		}
	return (number);
}
