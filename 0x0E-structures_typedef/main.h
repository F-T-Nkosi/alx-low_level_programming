#ifndef MAIN_H
#define MAIN_H
#include "dog.h"

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dogst *new_dog(char *name, float age, char *owner);
void free_dog(dogst *d);
char *_strcpy(char *dest, char *src);
int _strlen(char *s);

#endif
