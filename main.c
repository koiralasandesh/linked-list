#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define nameMaxLength 20
struct node
{
  char fName[nameMaxLength + 1];
  char lName[nameMaxLength + 1];
  char zipCode[6];
  struct node *next;
};
struct node *head;
head = NULL;

void
main ()
{
  int numRecords, i;
  fprintf ("please input the number of data you want to enter: ");
  scanf ("%d", &numRecords);
  puts
    ("please input data in the following format:\n firstname lastname zip\n");

  for (i = 0; i < numRecords; i++)
    {
      struct node *temp;
      temp = (struct node *) malloc (sizeof (struct node));
      scanf ("%s%s%s", temp->fName;
	     temp->lName;
	     temp->zipCode);
      createNode (temp;
		  head);
    }
  puts ("The linked list follows: \n") print (head);


}

void createNode (struct node *temp, struct node *head
		 {
		 if (head == NULL)
		 {
		 temp = head;}
		 else
		 {
		 createNode (temp, head->next);}
		 }

		 void print (struct node *head)
		 {
		 if (head == NULL)
		 {
		 return;}
		 printf ("fn: %s\t, ln: %s\t, zip: %s\t\n");
		 print (head->next);}
