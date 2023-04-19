#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
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
 * new_dog - creates a new dog
 * @name: input string
 * @age: input float
 * @owner: input string
 *
 * Return: new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newDog;
	int len1 = _strlen(name),
	    len2 = _strlen(owner);

	newDog = malloc(sizeof(dog_t));
	if (!newDog)
	{
		return (NULL);
	}

	(*newDog).name = malloc(sizeof(char) * len1 + 1);
	if (!(*newDog).name)
	{
		free(newDog);
		return (NULL);
	}
	_strcpy((*newDog).name, name);

	newDog->age = age;

	(*newDog).owner = malloc(sizeof(char) * len2 + 1);
	if (!(*newDog).owner)
	{
		free((*newDog).name);
		free(newDog);
		return (NULL);
	}
	_strcpy((*newDog).owner, owner);

	return (newDog);
	free(newDog);
}
