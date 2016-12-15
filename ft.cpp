#include <iostream>
#include <cstdlib>
#include <string>
#include "ftheader.h"
 
 
using namespace std;
 
 

/*   Function to input data on Family members   */
struct Family *get_person(void)
{
   struct Family *temp;         /* Define temporary structure pointer */

   /* Allocate memory for a structure */
   temp = (struct Family*) malloc(sizeof(struct Family));

   cout << "\nEnter the name of the person: ";
   cin >> temp -> name ;         /* Read the Family's name */

   cout <<"\nWho is "<<temp->name<<"'s father? ";
   cin >> temp->father ;        /* Get the father's name */
 
   cout <<"\nWho is "<<temp->name<<"'s mother? ";
   cin >> temp -> mother ;      /* Get the mother's name */
 
   temp->next = temp->previous = NULL; /* Set pointers to NULL */

   temp->p_to_pa = temp->p_to_ma = NULL;    /* Set pointers to NULL  */
   return temp;          /* Return address of Family structure */
}

char set_ancestry(struct Family *pmember1, struct Family *pmember2)
{
   if(strcmp(pmember1->father, pmember2->name) == 0)
   {
     pmember1->p_to_pa = pmember2;
     return 0;
   }
 
   if( strcmp(pmember1->mother, pmember2->name) == 0)
   {
     pmember1->p_to_ma = pmember2;
     return 0;
   }
   else
     return 0;
}
 
/* Fill in pointers for mother or father relationships */
char related (struct Family *pmember1, struct Family *pmember2)
{
   return set_ancestry(pmember1, pmember2) ||
                           set_ancestry(pmember2, pmember1);
}
