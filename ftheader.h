#include <stdio.h>
#include <ctype.h>
#include <stdlib.h>
#include <string.h>
#include <iostream>
using namespace std;
 
 
struct Family *get_person(void);    /* Prototype for input function */
char related(struct Family *pmember1, struct Family *pmember2);
char set_ancestry(struct Family *pmember1, struct Family *pmember2);

struct Family                      /* Family structure declaration   */
{
//struct Date dob;
  char name[20];
  char father[20];
  char mother[20];
  
  struct Family *next;            /* Pointer to next structure      */
  struct Family *previous;        /* Pointer to previous structure  */
  struct Family *p_to_pa;         /* Pointer to father structure   */
  struct Family *p_to_ma;         /* Pointer to mother structure   */
};



