#ifndef MISC_H_
#define MISC_H_

#include <stdbool.h>

#include "matrix.h"

#define MAX_FLOAT_WIDTH 40

#define MAX(a,b) (((a) > (b)) ? (a) : (b))

void print_table(char** labels, long double** data, unsigned int num_rows);
void print_matrix(Matrix* mat);

#endif /* MISC_H_ */
