#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: the input string
 *
 * Return: the length of the string
 */
size_t _strlen(const char *s)
{
	size_t len = 0;

	while (s && s[len])
		len++;
	return (len);
}
/**
 * create_file - creates a file with the given name and writes the given
 * text content to it
 * @filename: the name of the file to create
 * @text_content: the text content to write to the file (can be NULL)
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
	{
	int file_fd, num_bytes;

	if (!filename)
		return (-1);

	file_fd = open(filename, O_WRONLY | O_CREAT | O_TRUNC, 0600);
	if (file_fd == -1)
		return (-1);

	if (!text_content)
	{
		close(file_fd);
		return (1);
	}
	num_bytes = write(file_fd, text_content, _strlen(text_content));
	if (num_bytes == -1 || (int) num_bytes != (int) _strlen(text_content))
	{
		close(file_fd);
		return (-1);
	}
	close(file_fd);
	return (1);
}
