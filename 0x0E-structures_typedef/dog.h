#ifndef DOG_H
#define DOG_H
/**
 * struct dog - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: dfghdfgh
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};
/**
 * struct dog_t - dog data
 * @name: name of the dog
 * @age: age of the dog
 * @owner: name of the owner of the dog
 *
 * Description: dfghdfgh
 */
struct dog_t
{
char *name;
float age;
char *owner;
};
typedef struct dog_t dog_t;
void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
void free_dog(dog_t *d);
dog_t *new_dog(char *name, float age, char *owner);
#endif
