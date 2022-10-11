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

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

typedef struct dog dog_t;

#endif