#ifndef DOG_FILE
#define DOG_FILE

/**
 * struct dog - this is struct for dogs
 * @name: Dog name
 * @age: Dog Age
 * @owner: Dog's Owner
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/**
 * dog_t - typedef for dog struct
 */

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
char *_strcpy(char *dest, char *src);
unsigned int _strlen(char *src);

#endif
