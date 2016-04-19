/**
 * @file company.h
 * @author Stu Steiner
 * @brief The company data structure
 *
 * The company data structure.  A company contains a name
 * of the company and the company city.
 */

#ifndef COMPANY_H_
#define COMPANY_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * @brief The company data structure.
 *
 * A company contains a name of the company and the company city.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct company
{
	char *name;
	char * city;
};

typedef struct company Company;

#endif /* COMPANY_H_ */
