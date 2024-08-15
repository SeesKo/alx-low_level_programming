#ifndef MAIN_H
#define MAIN_H

#define BUFFER_SIZE 1024

#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <fcntl.h>

#define ELF_MAGIC 0x7f454c46
#define ELF32 1
#define ELF64 2
#define ELFDATA2LSB 1
#define ELFDATA2MSB 2

ssize_t read_textfile(const char *filename, size_t letters);
int create_file(const char *filename, char *text_content);
int append_text_to_file(const char *filename, char *text_content);
int _putchar(char c);
int open_source_file(const char *filename);
int open_destination_file(const char *filename);
int copy_file(int source_fd, int destination_fd);
int set_permissions(const char *filename);
void print_error(const char *msg);
void print_hex(unsigned char *data, size_t length);
void display_elf_header(unsigned char *e_ident);

#endif /* MAIN_H */
