#include <stdio.h>
#include <stdlib.h>

#include "linkedList.h"

/**
 * @brief The so called "constructor" for the linked list
 *
 * The linked list constructor builds a non circular linked list that
 * contains a dummy head node.  This is meant to be similar to a Java
 * linked list constructor.
 *
 * @return LinkedList * - The linked list pointer that contains a dummy head node but is NOT circular.
 */
LinkedList * linkedList()
{
	Node *node = (Node *)malloc(sizeof(Node));
	node->data = NULL;
	node->next = NULL;
	node->prev = NULL;

	LinkedList *temp = (LinkedList*)malloc(sizeof(LinkedList));
	temp->head = node;
	temp->size = 0;
	
	return temp;
}

/**
 * @brief The add last function for the linked list
 *
 * Appends the specified node to the end of this list
 *
 * @param theList - The specified linked list
 * @param nn - The node to be added
 *
 * @warning - The passed in LinkedList * theList is checked nothing happens if NULL
 * @warning - The passed in Node * nn is checked - exit(-99) if NULL
 */
void addLast(LinkedList * theList, Node * nn)
{
	Node *head = theList->head;
	
	if(nn == NULL)
	{
		exit(-99);
	}
	else
	{
		if(head->next == NULL)
		{
			nn->prev = head;
			head->next = nn;
		}
		else
		{
			Node *cur = theList->head;
			while(cur->next != NULL)
			{
				cur = cur->next;
			}

			nn->prev = cur;
			cur->next = nn;
		}

		theList->size++;
	}

	
}


/**
 * @brief The add first function for the linked list
 *
 * Appends the specified node to the beginning of this list
 *
 * @param theList - The specified linked list
 * @param nn - The node to be added
 *
 * @warning - The passed in LinkedList * theList is checked nothing happens if NULL
 * @warning - The passed in Node * nn is checked - exit(-99) if NULL
 */
void addFirst(LinkedList * theList, Node * nn)
{
	Node *head = theList->head;
	
	if(nn == NULL)
	{
		exit(-99);
	}
	else
	{
		if(head->next == NULL)
		{
			nn->prev = head;
			head->next = nn;
		}
		else
		{
			Node *first = head->next;
			
			//link dummy to new node
			head->next = nn;
			nn->prev = head;

			//link new node with previous first
			nn->next = first;
			first->prev = nn;
		}

		theList->size++;
	}
	
}


/**
 * @brief The remove item function for the linked list
 *
 * Removes the first occurrence of the specified element from this list, if it
 * is present.  If this list does not contain the element, it is unchanged.
 *
 * @param theList - The specified linked list
 * @param nn - A node representing the element to be found and removed
 * @param *removeData - The function pointer for freeing the specific data type
 * @param *compare - The compare function to compare specific data type
 *
 * @warning - The passed in LinkedList * theList is checked nothing happens if NULL
 * @warning - The passed in void * type is checked - exit(-99) if NULL
 */
void removeItem(LinkedList * theList, Node * nn, void (*removeData)(void *), int (*compare)(const void *, const void *))
{
    Node *head = theList->head;
    
    if(nn == NULL)
    {
        exit(-99);
    }
    else
    {
        if(head->next == NULL)
        {
            //nothing happens
        }
        else
        {
            Node *cur, *prevCur, *nextCur;
	    
	    for(cur = head->next; cur != NULL; cur = cur->next)
	    {
		if((*compare)(cur->data,nn->data) == 0)
		{
			nextCur = cur->next;
			prevCur = cur->prev;

			prevCur->next = nextCur;

			if(nextCur != NULL)
				nextCur->prev = prevCur;
			

			(*removeData)(cur->data);
		
			free(cur);
			cur = NULL;



			theList->size--;


			break;
		}

		

	    }
        }

	(*removeData)(nn->data);
	nn->next = NULL;
	nn->prev = NULL;

	free(nn);
	nn = NULL;
    }
}


/**
 * @brief Empties the list and its contents
 *
 * Removes all of the elements from this list.  The list will be empty after the function completes
 *
 * @param theList - The specified linked list
 * @param *removeData - The function pointer for freeing the specific data type
 * @param *compare - The compare function to compare specific data type
 *
 * @warning - The passed in LinkedList * theList is checked - if NULL nothing happens
 */
void clearList(LinkedList * theList, void (*removeData)(void *))
{
    if(theList != NULL)
    {
    	Node *head = theList->head;

    	Node *cur;
	Node *nextCur;
    
    	for(cur = head->next; cur != NULL;)
    	{
		nextCur = cur->next;
		(*removeData)(cur->data);
		free(cur);
		cur = nextCur;
    	}

    	cur = NULL;    
    	free(head);
    	head = NULL;
	
    
   
    	theList->size = 0;
    }
}


/**
 * @brief Prints the contents of this linked list
 *
 * Prints the contents, if there are any of this linked list.  If the list is NULL
 * or empty, "Empty List" is printed.
 *
 * @param theList - The specified linked list
 * @param *convert - The function pointer for printing the specific data type
 *
 * @warning - The passed in LinkedList * theList is checked - if NULL "Empty List" is printed
 */
void printList(const LinkedList * theList, void (*convertData)(void *))
{
    Node *head = theList->head;
    if(theList->size == 0)
    {
        printf("\nEmpty List\n");
        
    }
    else
    {
        Node *cur;
    
        for(cur = head->next; cur != NULL; cur = cur->next)
        {
            (*convertData)(cur->data);
        }
    }
}


