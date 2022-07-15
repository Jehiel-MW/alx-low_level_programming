#include "main.h"

/**
 * cap_string - a function that capitalizes all words of a string
 * @str: char type pointer
 *
 * Return: pointer
 */
char *cap_string(char *str)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
	{
		c[0] = c[0] - 32;
	}
	for (i = 1; c[i] != '\0'; i++)
	{
		if ((c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n'
			|| c[i - 1] == ','
			|| c[i - 1] == ';' || c[i - 1] == '.' || c[i - 1] == '!'
			|| c[i - 1] == '?' || c[i - 1] == '"' || c[i - 1] == '('
			|| c[i - 1] == ')' || c[i - 1] == '{' || c[i - 1] == '}')
			&& (c[i] > 'a' && c[i] < 'z'))
		{
			c[i] = c[i] - 32;
		}
	}

