#ifndef _HEADER_
#define _HEADER_

/**
 *struct dog - struct
 *@name: first member
 *@age: second member
 *@owner: third member
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif
