/*
** EPITECH PROJECT, 2021
** Dante
** File description:
** Dante's files read
*/

#include <fcntl.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

char *file_read(char const *path)
{
    int fd = open(path, O_RDONLY);
    char *file = NULL;
    struct stat info;

    if (fd == -1 || stat(path, &info) == -1) {
        close(fd);
        return NULL;
    }
    file = malloc(sizeof(char) * (info.st_size + 1));
    if (read(fd, file, info.st_size) == -1) {
        close(fd);
        return NULL;
    }
    file[info.st_size] = '\0';
    close(fd);
    return file;
}
