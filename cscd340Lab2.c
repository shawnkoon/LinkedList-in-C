/**
 * @file cscd340Lab1.c
 * @author Stu Steiner
 * @brief The file that contains main
 *
 * The file that contains main is meant to
 * test your generic linked class using a basic
 * set of functions.
 *
 * @note This file will never be changed
 */
#include "./utils/myUtils.h"
#include "./utils/fileUtil.h"
#include "./linkedlist/listUtils.h"
#include "./linkedlist/linkedList.h"
#include "./linkedlist/genericData.h"
#include "./linkedlist/requiredIncludes.h"

int main()
{

   int total, choice;
   FILE * fin = NULL;
   LinkedList * myList = linkedList();

   fin = openInputFile_Prompt();
   total = readTotal(fin);
   buildList(myList, total, fin, buildType);
   fclose(fin);

  
   do
   {
      choice = menu();

      switch(choice)
      {
         case 1: printList(myList, printType);
                 break;

         case 2: addFirst(myList, buildNode(stdin, buildType_Prompt));
                 break;

         case 3: addLast(myList, buildNode_Type(buildType_Prompt(stdin) ) );
                 break;

         case 4: sort(myList, compare);
                 break;

         case 5: removeItem(myList, buildNode(stdin, buildType_Prompt), cleanType, compare);
                 break;
      }// end switch

   }while(choice != 6);

   clearList(myList, cleanType);
   free(myList);
   myList = NULL;

   printf("Program Ended\n");

   return 0;

}// end main
