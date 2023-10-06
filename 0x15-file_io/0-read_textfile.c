#include <stdlib.h>
#include "main.h"
/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file to read
 * @letters: number of letters to read and print
 *
 * Return: number of letters read and printed, or 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
		{
			int file_desc; /* descriptor of file */
			ssize_t num_read, num_written;
			char *file_buffer;

			if (!filename)
			{
				return (0);
			}
			file_desc = open(filename, O_RDONLY);

			if (file_desc < 0)
			{
				return (0);
			}
			file_buffer = malloc(sizeof(char) * letters);

			if (!filename)
			{
				return (0);
			}
			num_read = read(file_desc, file_buffer, letters);

			if (num_read < 0)
			{
				free(file_buffer);
				close(file_desc);
				return (0);
			}
			/* Write to STDOUT */
			num_written = write(STDOUT_FILENO, file_buffer, num_read);

			if (num_written < 0)
			{
				free(file_buffer);
				close(file_desc);
				return (0);
			}
			close(file_desc);
			return (num_read);
			}
