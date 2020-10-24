#ifndef FUNCTIONS_H
#define FUNCTIONS_H
int sum_them_all(const unsigned int n, ...);
void print_all(const char * const format, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
/**
 * struct tipo - Struct tipo
 *
 * @car: the character
 * @f: The function associated
 */
typedef struct tipo
{
	char *car;
	void (*f)();
} tipos;
#endif
