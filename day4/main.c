#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdbool.h>


#define data_type int


/*************Global section ***********/
struct node {
   char *Name;
        data_type ID;
        data_type Appointment;

   struct node *next;
};

struct node *head = NULL;
struct node *current = NULL;

/*************************************/




/************************   printing ************/
void printList() {
   struct node *PRINT = head;
   printf("\n[ ");

   //start from the beginning
   while(PRINT != NULL) {
      printf("(name = %s, ID = %d,Appointment = %d) ",PRINT->Name,PRINT->ID,PRINT->Appointment);
      PRINT = PRINT->next;
   }

   printf(" ]\n");
}


/*************************************/






/***********Adding a new node **************/
void add(int yourid, int yourAppointment , char NAME[20]) {
   //create a link
   struct node *New_Node = (struct node*) malloc(sizeof(struct node));

   New_Node->ID = yourid;
   New_Node->Appointment = yourAppointment;
   New_Node->Name = NAME;

   //point it to old first node
   New_Node->next = head;

   //point first to new first node
   head = New_Node;
}



/**********************************************/


//is list empty
bool isEmpty() {
   return head == NULL;
}








/*****************SEARCH *********************/
struct node* search(int TheAppointment) {

                                                        //start from the first link
   struct node* current = head;

                                                         //if list is empty
   if(head == NULL) {
      return NULL;
   }

                                                           //navigate through list
   while(current->Appointment != TheAppointment) {

                                                          //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
                                                        //go to next link
         current = current->next;
      }
   }

                                                    //if data found, return the current Link
   return current;
}

/******************************************************************/



/************** EDITING section *******************************/

void Edit(int id)
 {
     char EditSector=0;
     int NewId =0, NewAppointment = 0;
     char NewName [20]={0};


     printf("which part do you wanna edit (I) for ID, (A) for Appointment, (N) for the name !! \n");

       scanf("%c",&EditSector);

     if(search(id))
     {


       while(EditSector == 0);

              struct node* current = search;


       switch (EditSector)
        {
            case 'I':
                printf("enter your new id .....! \n");
                scanf("%d",&NewId);
                current->ID = NewId;

                break;
            case 'A':
                printf("enter your new Appointment .....! \n");
                scanf("%d",&NewAppointment);
                 if (search(NewAppointment)|| (NewAppointment >24))

                    {
                        if (NewAppointment > 24)
                        {
                            printf("the appointment its just for a day!!! \n");
                        }
                        else
                        {
                            printf("Sorry its reserved !!! \n");
                        }

                    }
                    else
                        {
                            current->ID = NewAppointment;
                        }



                break;
            case 'N':
                printf("enter your new Name .....! \n");
                scanf("%s",&NewName);
                current->Name = NewName;

                break;
  printf("inside while loop !! \n");

        }       printf("outside of loop !! \n");

     }





     else
     {
         printf("sorry!! this ID not saved yet");
     }



}


/******************************************************************/





/************deleting Function ***************/

struct node* delete(int id) {

                                                           //start from the first link
   struct node* current = head;
   struct node* previous = NULL;

   if(head == NULL) {
      return NULL;
   }

   while(current->ID != id) {

                                                      //if it is last node
      if(current->next == NULL) {
         return NULL;
      } else {
                                                     //store reference to current link
         previous = current;
                                                            //move to next link
         current = current->next;
      }
   }

                                                              //found a match, update the link
   if(current == head) {
                                                              //change first to point to next link
      head = head->next;
   } else {
                                                              //bypass the current link
      previous->next = current->next;
   }

   return current;
}



/******************************************************************/







/*****************the main function ***********************/
int main(void)
{

    char NameInArray[20]={0}, option = 0, reserved= 0;
    int YourId = 0, YourAppointment = 0;
    //int *head = NULL ;
    //int   *TheHead = NULL

printf("welcome ! \n");
printf("choice your option (a) to add new Appointment ,  (e) to edit your Appointment,  (d) to delete your Appointment,(p) to print !! \n");
scanf("%c",&option);


while(1)
{
    if (option == 0)
    {
        printf("choice your option (a) to add new Appointment ,  (e) to edit your Appointment,  (d) to delete your Appointment,(p) to print !! \n");

    }
scanf("%c",&option);


switch (option)
{
case 'a':
    printf("The head adders   = %p \n",head);


    printf("your name plz! '.......'\n");
    scanf("%s",NameInArray);

    printf("your ID plz! '.......'\n");
    scanf("%d",&YourId);

    printf("your Appointment ! '.......'\n");
    scanf("%d",&YourAppointment);


    if (search(YourAppointment)|| (YourAppointment >24))

        {
            if (YourAppointment > 24)
                {
                  printf("the appointment its just for a day!!! \n");
                }
                else
                {
                printf("Sorry its reserved !!! \n");
                }

        }
        else
        {
         add(YourId,YourAppointment,NameInArray);
         printf("Saved your ID = %d !!! \n",YourId);

        }

    option = 0;
    break;

case 'e':
    printf("the ID to Edit plz!! ..... \n");
    scanf("%d",&YourId);
    Edit(YourId);
    option = 0;


    break;


case 'd':
    printf("Im plz! insert the id to delete it....... \n");
    scanf("%d",&YourId);
    delete(YourId);
    printf("deleted id number ( %d )!!  \n", YourId);
    option = 0;
    break;

case 'p':
    printf("The head adders   = %p \n",head);
    printf("Im printing \n");
    printList();
    option = 0;
    break;


}


}


return 0;
}
