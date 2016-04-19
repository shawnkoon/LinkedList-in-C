/**
 * @file stock.h
 * @author Stu Steiner
 * @brief The stock data structure
 *
 * The stock data structure.  A stock contains a ticker symbol, price,
 * and a publisher.
 */

#ifndef STOCK_H_
#define STOCK_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#include "company.h"

/**
 * @brief The stock data structure.
 *
 * A stock contains a ticker symbol, price, and a company.
 *
 * @note I prefer named structures and then the typedef after the structure
 */
struct stock
{
   char * symbol;
   double price;
   Company comp;
};

typedef struct stock Stock;

#endif /* STOCK_H_ */
