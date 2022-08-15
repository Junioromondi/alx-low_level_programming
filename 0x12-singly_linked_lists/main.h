#ifndef _LISTS_H
#define _LISTS_H

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

size_t print_list(const list_t *h);
_putchar (char c);
size_t list_len(const list_t *h);
list_t *add_node_end(list_t **head, const char *str);

#endif
