#ifndef __HASH_TABLES___
#define __HASH_TABLES___
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * struct hash_node_s - struct hash_node_s
 * @key: the key
 * @value: the value
 * @next: pointer to next node
 *
 * Return: a pointer to the newly created hash table
 */
typedef struct hash_node_s
{
	char *key;
	char *value;
	struct hash_node_s *next;
} hash_node_t;

/**
 * struct hash_table_s - hash_table_s
 * @size: the size
 * @array: the array
 *
 */
typedef struct hash_table_s
{
	unsigned long int size;
	hash_node_t **array;
} hash_table_t;


hash_table_t *hash_table_create(unsigned long int size);

#endif /* __HASH_TABLES___ */
