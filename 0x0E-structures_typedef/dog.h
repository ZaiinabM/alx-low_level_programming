#ifndef _DOG_H
#define _DOG_H
/**
 * struct dog - attributes of dog
 * @name: name input of dog
 * @age: age input of dog
 * @owner: dog owner
 * Description: struct type that stores name, age and owner of dog
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * dog_t - Typedef for dog struct
 */
typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
