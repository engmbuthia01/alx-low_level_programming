#include "main.h"
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <stdlib.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the text file
 * @letters: the number of letters that the function should read and print
 *
 * Return: the actual number of letters the function could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
    char *buf;
    ssize_t fd, t, w;

    fd = open(filename, O_RDONLY);
    if (fd == -1)
        return (0);

    buf = malloc(sizeof(char) * letters);
    if (buf == NULL)
    {
        close(fd);
        return (0);
    }

    t = read(fd, buf, letters);
    if (t == -1)
    {
        free(buf);
        close(fd);
        return (0);
    }

    w = write(STDOUT_FILENO, buf, t);
    if (w == -1 || w != t)
    {
        free(buf);
        close(fd);
        return (0);
    }

    free(buf);
    close(fd);
    return (w);
}
