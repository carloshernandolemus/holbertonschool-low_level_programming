#ifndef DJANGO
#define DJANGO
/**
 * struct dog - Structure dog
 * @name: Type char of the name
 * @age: Type float for the age
 * @owner: Type char for the owner
 * Description: This is the structure to form data
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
