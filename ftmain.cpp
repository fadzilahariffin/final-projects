#include <iostream>
#include <cstdlib>
#include <string>
#include "ft.cpp"
 
using namespace std;
 
int main()
{
	char name[20];
  	char father[20];
  	char mother[20];
  	char siblings[20];
   struct Family *first = NULL;    /* Pointer to first person        */
   struct Family *current = NULL;  /* Pointer to current person      */
   struct Family *last = NULL;     /* Pointer to previous person     */
 
   char more ;               /* Test value for ending input    */
 
   for( ; ; )
   {
     cout <<"\nDo you want to enter details of a person (Y or N)? ";
     cin  >> more;
     if(tolower(more) == 'n') 
     break;
 
     current = get_person();
 
     if(first == NULL)
     {
       first = current;            /* Set pointer to first Family    */
       last = current;             /* Remember for next iteration    */
     }
     else
     {
       last->next = current;  		/* Set next address for previous Family */  
       current->previous = last; 	/* Set previous address for current */
       last = current;           	/* Remember for next iteration */             
     }
   }
 
   current = first;
 
   while(current->next != NULL) 	 /* Check for relation for each person in    */
   {                       			/* the list up to second to last            */
     int parents = 0;      			/* Declare parent count local to this block */
     last = current->next; 			/* Get the pointer to the next              */
 
     while(last != NULL)  			 /* This loop tests current person           */
     {                    			 /* against all the remainder in the list    */
       if(related(current, last))         /* Found a parent ?          */
         if(++parents == 2)   /* Yes, update count and check it        */
           break;             /* Exit inner loop if both parents found */
 
       last = last->next;     /* Get the address of the next           */
     } 
     current = current->next;   /* Next in the list to check             */
   }
 
   /* Now tell them what we know */
 
   /* Output Family data in correct order */
   current = first;
 
   while (current != NULL)  /* Output Family data in correct order  */
   {
     cout << current->name <<" has " <<current->father<<" and " <<current->mother<<" as parents."<<endl;
            
				current = current->next;   //current points to next in list      
   }
	/* Now free the memory */  
   current = first;
   while(current->next != NULL)
   {
     last = current;     /* Save pointer to enable memory to be freed */
     current = current->next; /* current points to next in list       */
     free(last);         /* Free memory for last                      */
   }
}
