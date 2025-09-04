#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - returns the length of a string
 * @s: string
 *
 * Return: length
 */
int _strlen(char *s)
{
    int len = 0;

    while (s && s[len] != '\0')
        len++;
    return (len);
}

/**
 * _strcpy - copies a string
 * @dest: destination buffer
 * @src: source string
 *
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
    int i = 0;

    if (!dest || !src)
        return (dest);

    while (src[i] != '\0')
    {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
    return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog_t, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
    dog_t *dog;
    int len_name, len_owner;

    dog = malloc(sizeof(dog_t));
    if (dog == NULL)
        return (NULL);

    len_name = _strlen(name);
    len_owner = _strlen(owner);

    dog->name = malloc(sizeof(char) * (len_name + 1));
    if (dog->name == NULL)
    {
        free(dog);
        return (NULL);
    }
    _strcpy(dog->name, name);

    dog->owner = malloc(sizeof(char) * (len_owner + 1));
    if (dog->owner == NULL)
    {
        free(dog->name);
        free(dog);
        return (NULL);
    }
    _strcpy(dog->owner, owner);

    dog->age = age;

    return (dog);
}
