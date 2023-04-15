#include "main.h"
/**
 * exit_error - prints error messages and exits with exit value
 * @error: exit code to be used to exit
 * @s: string variable used for error message, can be NULL
 * @fd: file descriptor to close, ignored if 0
 *
 * Return: 0 on success
 */
int exit_error(int error, char *s, int fd)
	{
		const char *error_messages[] = {
			"Usage: cp file_from file_to\n",
			"Error: Can't read from file %s\n",
			"Error: Can't write to %s\n",
			"Error: Can't close fd %d\n"
		};
		if (error < 97 || error > 100)
		{
			return (0);
		}

		if ((error != 97 && error != 100) && s == NULL)
		{
			return (0);
		}

		dprintf(STDERR_FILENO, error_messages[error - 97], s);
		if (fd != 0)
		{
			close(fd);
		}

		exit(error);
		}
/**
 * main - copies one file to another
 * @argc: should be 3 (./a.out copyfromfile copytofile)
 * * @argv: first is file to copy from (fd_1), second is file to copy to (fd_2)
 *
 * Return: 0 (success), 97-100 (exit value errors)
 */
int main(int argc, char *argv[])
	{
		int fd_1, fd_2, n_read, n_written;
		char buffer[1024];

		if (argc != 3)
		{
			exit_error(97, NULL, 0);
		}

		fd_2 = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (fd_2 == -1)
	{
		exit_error(99, argv[2], 0);
	}
	fd_1 = open(argv[1], O_RDONLY);
	if (fd_1 == -1)
	{
		exit_error(98, argv[1], 0);
	}
	while ((n_read = read(fd_1, buffer, 1024)) > 0)
	{
		if (n_read == -1)
		{
			exit_error(98, argv[1], 0);
		}
		n_written = write(fd_2, buffer, n_read);
		if (n_written == -1)
		{
			exit_error(99, argv[2], 0);
		}
	}
	if (close(fd_2) == -1)
	{
		exit_error(100, NULL, fd_2);
	}
	if (close(fd_1) == -1)
	{
		exit_error(100, NULL, fd_1);
	}
	return (0);
	}
