#include "main.h"
/**
 * append_text_to_file - appends text at the end of a file
 *
 * @filename: const to pointer
 *
 * @text_content: pointer
 *
 * Return:i int
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fpOpen, fpWrite, length = 0;

	if (filename == NULL)
		return (-1);

	fpOpen = open(filename, O_WRONLY | O_APPEND);

	if (fpOpen == -1)
	{
		return (-1);
	}

	if (text_content == NULL)
		text_content = "";

	while (text_content[length] != '\0')
	{
		length++;
	}

	fpWrite = write(fpOpen, text_content, length);

	if (fpWrite == -1)
		return (-1);

	close(fpOpen);

	return (1);
}
