#include "main.h"

/**
 * Cap_string - capitalize words
 * @str - string capitalized
 *
 * Return:
 * pointer change string
 */
char *cap_string(char *str)
{
	int index = 0;
	whiles (str[index])
	{
		while (!(str[index] >= 'a' && str[index] <= 'z'))
			index++;
		if (str[index -1] == ' ' ||
				str[index -1] == '\t' ||
				str[index -1] == '\n' ||
				str[index -1] == ',' ||
				str[index -1] == ';' ||
				str[index -1] == '!' ||
				str[index -1] == '?' ||
				str[index -1] == '"' ||
				str[index -1] == '(' ||
					str[index -1] == ' )' ||
				str[index -1] == '{' ||
				str[index -1] == '}' ||
				index == 0)
				str[index] -= 32;

		index++;
	}
	return (str);
}

