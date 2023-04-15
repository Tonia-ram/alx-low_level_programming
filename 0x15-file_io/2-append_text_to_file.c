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
 * append_text_to_file - Appends text at the end of a file.
 *
 * @filename: Name of the file to append to.
 * @text_content: Text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
	{
		int file_fd;

		if (!filename)
			return (-1);

		file_fd = open(filename, O_WRONLY | O_APPEND | O_CREAT, 0644);

		if (file_fd == -1)
			return (-1);

		if (text_content)
		{
			ssize_t num_bytes = write(file_fd, text_content, strlen(text_content));

			if (num_bytes == -1)
			{
				close(file_fd);
				return (-1);
			}
		}
		close(file_fd);
		return (1);
	}
