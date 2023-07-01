#include "main.h"

/**
*cap_string - function capitalizes all words of a string
*Separators of words: space, tabulation,
*new line, ,, ;, ., !, ?, ", (, ), {, and }
*str: pointer to string
*
*return: str
*/
char *cap_string(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (str[0] >= 97 && str [0] <= 122)
			str[i] = str[i] - 32;
		if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
		    str[i] == ',' || str[i] == ';' || str[i] == '.' ||
		    str[i] == '?' || str[i] == '"' || str[i] == '(' ||
		    str[i] == ')' || str[i] == '{' || str[i] == '}')
		{
			if (str[i + 1] >= 97 && str[i +1] <= 122)
				str[i + 1] = str[i + 1] - 32;
		}
		i++;
	}

	return (str);
}
