#include "main.h"
/**
 * create_file - creates a new file
 *
 * @filename: parameter descrip
 *
 * @text_content: param description
 *
 * Return: int
 */
int create_file(const char *filename, char *text_content)
{
	int pt, length = 0, fpWrite;

	pt = open(filename, O_CREAT | O_TRUNC | O_WRONLY, 0600);

	if (pt == -1)
		return (-1);

	if (text_content == NULL)
	{
		text_content = "";
	}

	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(pt, text_content, length);

	if (fpWrite == -1)
	{
		return (-1);
	}
	close(pt);
	return (1);
}
