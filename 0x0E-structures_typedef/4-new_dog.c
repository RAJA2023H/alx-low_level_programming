#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * _strlen - returns the length of a string
 * @s:  input string
 *
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (s[count] != '\0')
		count++;
	return (count);
}
/**
 * _strcpy - copies the string pointed to by src
 *		including the terminating null byte (\0)
 *		to the buffer pointed to by dest
 * @dest:  input pointer to dest
 * @src:  input pointer to src
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0, i;

	while (src[count] != '\0')
		count++;
	for (i = 0 ; i < count ; i++)
		dest[i] = src[i];
	dest[count] = '\0';
	return (dest);
}
/**
 * new_dog - function that creates a new dog
 * @name: dog name
 * @age: dog age
 * @owner: owner name
 *
 * Return: new dog or NULL
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *happy;
	unsigned int n, o;

	happy = malloc(sizeof(dog_t));
	if (!happy)
		return (NULL);

	n = _strlen(name);
	o = _strlen(owner);

	happy->name = malloc(sizeof(dog_t) * n + 1);
	if (!happy->name)
	{
		free(happy);
		return (NULL);
	}
	_strcpy(happy->name, name);

	happy->age = age;

	happy->owner = malloc(sizeof(dog_t) * o + 1);
	if (!happy->owner)
	{
		free(happy->name);
		free(happy);
		return (NULL);
	}
	_strcpy(happy->owner, owner);

	return (happy);
	free(happy);

