#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int word_count(char *str);
char *first_word(char *str);
/**
 * **strtow - set memory function
 *
 * @str: pointer to array
 * Return: s
 */
char **strtow(char *str)
{
	char **strarr;
	int word, count, letter;

	if (str == NULL || *str == '\0')
		return (NULL);
	word = word_count(str);

	strarr = (char **)malloc(sizeof(char *) * (word + 1));

	if (!strarr)
		return (NULL);

	for (count = 0; count <= word;)
	{
		strarr[count] = (NULL);
		count++;
	}
	count = 0;
	word = 0;
	letter = 0;
		while (str[count] != '\0')
	{
			if (str[count] != ' ' && !letter)
			{
				strarr[word] = first_word(str + word);
				if (!strarr[count])
				{
					word--;
					while (word >= 0)
						free(*(strarr + word--));
					free(strarr);
					return (NULL);
				}
				word++;
				letter = 1;
			}
			else if (*(str + count) == ' ' && letter)
				letter = 0;
	count++;
	if (!word)
		return (NULL);
	return (strarr);
	if (str[word] != ' ' && !letter)
	{
		strarr[count] = first_word(str + count);
		if (!strarr[count])
		{
			word--;
			while (word >= 0)
				free(*(strarr + word--));
			free(strarr);
			return (NULL);
		}
		word++;
		letter = 1;
	}
	else if (str[count] == ' ' && letter)
		letter = 0;
	count++;
	}
	if (!word)
		return (NULL);

	return (strarr);
}
/**
 * word_count - count
 * @str: char
 * Return: word
 */
int word_count(char *str)
{
	int count = 0, word, letter;

	while (str[count] != '\0')
	{
		if (str[count] != ' ' && !letter)
		{
			word++;
			letter = 1;
		}
		else if (str[count] == ' ' && letter)
		{
			letter = 0;
		}
		count++;
	}
	return (word);
}
/**
 * first_word -  first
 * @str: char
 * Return: pointer
 */
char *first_word(char *str)
{
	int count;
	char *word;

	count = 0;

	while (str[count] != ' ' && str[count] != '\0')
	{
		count++;
	}
	word = malloc(sizeof(char) * (count + 1));

	if (!word)
	{
		return (NULL);
	}
	word[count] = '\0';
	count--;

	while (count >= 0)
	{
		word[count] = str[count];
	}
	return (word);
}
