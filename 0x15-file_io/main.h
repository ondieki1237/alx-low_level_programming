#ifndef MAIN_H
#define MAIN_H

/* open */
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>

/* close */
#include <unistd.h>

/* malloc, free */
#include <stdlib.h>

/* dprintf */
#include <stdio.h>

#include <stdlib.h>

/* helper function */
int _putchar(char c);

/* function prototypes for all files */
ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);

#endif /*MAIN_H*/
