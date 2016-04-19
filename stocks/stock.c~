#include <stdio.h>
#include <stdlib.h>

#include "stock.h"
#include "../linkedlist/genericData.h"

// ---------------------------Start of genericData.h functions ------------------------//
/**
 * @brief Prints the specific types contents.
 *
 * The printType function is called via function pointer
 * Its focus is to print the specific type formatted for
 * the type
 *
 * @param passedIn - The void * passed in representing the specific data
 *
 * @warning - The passed in void * passedIn is checked - exit(-99) if NULL
 */
void printType(void * passedIn)
{
	

	if(passedIn == NULL)
	{
		exit(-99);
	}
	else
	{
		Stock *temp = passedIn;
		Company company = temp->comp;

		printf("\nSymbol = %s\n", temp-> symbol);
		printf("Price  = %lf\n", temp-> price);
		printf("Name   = %s\n", company.name);
		printf("City   = %s\n", company.city);
	}
}


/**
 * @brief Builds and returns a single specific data type.
 *
 * Reads the initial data from the file and then builds
 * an object of that specific data type.
 *
 * @note The carriage return will be removed when reading from the file
 *
 * @param fin - The FILE * representing the open file
 * @return void * - Representing an object of the specific type
 *
 * @warning - The passed in FILE * fin is checked - exit(-99) if NULL
 */
void * buildType(FILE * fin)
{
    if(fin == NULL)
    {
        exit(-99);
    }
    else
    {
        Stock *stock = (Stock*)malloc(sizeof(Stock));
        int c, i;
        char line[100];
	char ignore;

	fgets(line, sizeof(line), fin);

	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';

	stock->symbol = (char*)malloc(sizeof(line));
	strcpy(stock->symbol, line);

        fscanf(fin, "%lf%c", &(stock->price), &ignore);
	
	
	
	fgets(line, 100, fin);

	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';

	(stock->comp).name = (char*)malloc(sizeof(line));
	strcpy((stock->comp).name, line);

	

	fgets(line, 100, fin);
	
	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';

	(stock->comp).city = (char*)malloc(sizeof(line));
	strcpy((stock->comp).city, line);
	

	return stock;
    }

}
 

/**
 * @brief Builds and returns a single specific data type.
 *
 * Reads the initial data from the keyboard by prompting the user
 * for the specific information. An object of that specific data type
 * is constructed.
 *
 * @note The carriage return will be removed when reading from the keyboard
 *
 * @param fin - The FILE * representing stdin
 * @return void * - Representing an object of the specific type
 *
 * @warning - The passed in FILE * fin is checked - exit(-99) if NULL
 */
void * buildType_Prompt(FILE * fin)
{
    if(fin == NULL)
    {
        exit(-99);
    }
    else
    {
        
        Stock *stock = (Stock*)malloc(sizeof(Stock));
        int c, i;
        char line[100];
	char ignore;
        
        printf("Enter the symbol of the stock : ");
        fgets(line, sizeof(line), fin);
	
	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';

	stock->symbol = (char*)malloc(sizeof(line));
	strcpy(stock->symbol, line);
        
        printf("Enter the price of the stock : ");
        fscanf(fin, "%lf%c", &(stock->price), &ignore);
        
        printf("Enter the Name of the company : ");
	fgets(line, 100, fin);


	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';


	(stock->comp).name = (char*)malloc(sizeof(line));
	strcpy((stock->comp).name, line);

	printf("Enter the City : ");
	fgets(line, 100, fin);
	
	i=strlen(line)-1;
    	if(line[i]!='\n') while(getchar()!='\n');
    	if(line[i]=='\n') line[i]='\0';

	(stock->comp).city = (char*)malloc(sizeof(line));
	strcpy((stock->comp).city, line);
	

	return stock;
    }
    
    void *temp = NULL;
    
    return temp;
}


/**
 * @brief Compare two objects of the specific data type.
 *
 * Compares two object of the specific data type and emulates the
 * behavior of the Java compareTo method indicating a sense of order.
 * The data checked is determined by the specifications provided by
 * the user.
 *
 * @note The passed in items will need to be cast to the appropriate
 * specific data type.
 *
 * @param p1 - The void * representing an object of the specific data type
 * @param p2 - The void * representing an object of the specific data type
 * @return int - Representing order < 0 indicates p1 is less than p2,
 * > 0 indicates p1 is greater than p2 and == 0 indicates p1 == p2 for contents
 *
 * @warning - The passed in void * p1 is checked - exit(-99) if NULL
 * @warning - The passed in void * p2 is checked - exit(-99) if NULL
 */
int compare(const void * p1, const void * p2)
{
	if(p1 == NULL || p2 == NULL)
	{
		exit(-99);
	}
	else
	{
		const Stock *temp1 = p1;
		const Stock *temp2 = p2;

		
		if(strcmp(temp1->symbol, temp2->symbol) != 0)
		{
			return strcmp(temp1->symbol, temp2->symbol);
		}
		else
		{
			return ((temp1->price - temp2->price) * 1000)/ 1;
		}

		
	}

	return 0;
}


/**
 * @brief Cleans up all dynamically allocated memory for the specific data type
 *
 * Cleans up and frees all the dynamically allocated memory for the
 * specific data type.  Each pointer in the specific data type is set
 * to NULL after it has been freed.
 *
 * @param passedIn - The void * passed in representing the specific data
 *
 * @warning - The passed in void * passedIn is checked - exit(-99) if NULL
 */
void cleanType(void * passedIn)
{
	if(passedIn == NULL)
	{
		exit(-99);
	}
	else
	{
		Stock *temp = passedIn;
		//Company cmpTemp = temp->comp;

		free((temp->comp).name);
		(temp->comp).name = NULL;
		
		free((temp->comp).city);
		(temp->comp).city = NULL;

		//free(temp->comp);
		//temp->comp = NULL;

		free(temp->symbol);
		temp->symbol = NULL;

		free(temp);
		temp = NULL;

		//printf("Data freed\n");
		
	}
}


