#ifndef HEADER_FILE
#define HEADER_FILE

/**
 * struct type - struct type
 * @t: var type
 * @f: the function asscociated
 */

struct type
{
	char *t;
	void (*f)();
};
typedef struct type type_st;

/* prototypes*/
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif
