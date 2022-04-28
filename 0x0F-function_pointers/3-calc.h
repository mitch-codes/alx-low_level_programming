#ifndef calc_h
#define calc_h

/**
 * struct op - struct op
 *
 * @op: the operator
 * @f: the fuction associated
 */
typedef struct op
{
	char *op;
	int (*f)(int a, int b);
}op_t;

#endif
