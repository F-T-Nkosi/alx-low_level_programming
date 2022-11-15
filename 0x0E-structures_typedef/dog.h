#ifndef DOG_H
#define DOG_H

/**
 * struct dog - dog details
 * @name: dogs name
 * @age: dogs age
 * @owner: owners name
 */
struct dog
{
	char *name;
	float age;
	char *owner;
}

/**
 * dogst - typedef for dog struct
 */
typedef struct dog dogst;

#endif
