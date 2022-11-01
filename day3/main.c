// Online C compiler to run C program online
#include <stdio.h>
#include "function.h"


/******** the global Section***************/
struct Subjects
{
 int subject1;
 int subject2;
int subject3;
int subject4;
int subject5;

};

struct  Subjects arr[100];
int id=0;


/*******************************************/



/********* the main function ***********/

int main() {


char select=0;



    printf("hello its a program for the degree of student Subject so plz choice what is the operation   \n");



while(1)
{
    if (select ==0)
   {

    printf("insert (a) to add  insert (e) to edit  insert (r) to remove insert (p) to print   \n");
   }
    scanf("%c",&select);


  switch (select)
{

     case 'a':
    add();
    select = 0;
    break;

    case 'r':
    Remove();
    select = 0;
    break;

    case 'e':
    edit();
    select = 0;
    break;

    case 'p':
    print();
    select = 0;
    break;

}

}

    return 0;
}



/****************************************/






