#include <stdio.h>



/********extern global section*/



extern struct Subjects
{
 int subject1;
 int subject2;
int subject3;
int subject4;
int subject5;

}sub;

extern struct  Subjects arr[100];
extern int id;


/*******************************/


/********Add Function **********/


void add (void)
{

    printf("plz enter your id number \n");
    scanf("%d",&id);

printf("plz enter the first subject\n");
 scanf("%d",&arr[id].subject1);

 printf("plz enter the second subject\n");
 scanf("%d",&arr[id].subject2);

printf("plz enter the 3rd subject\n");
 scanf("%d",&arr[id].subject3);

printf("plz enter the 4th subject\n");
 scanf("%d",&arr[id].subject4);

printf("plz enter the 5th subject\n");
 scanf("%d",&arr[id].subject5);

printf("confirmed id = %d saved! \n",id);
}

/**********************************************/



/*********** print Function **********************/

void print(void)
{
  printf("which id you wanna to print");
scanf("%d",&id);
printf("sub1 = %d\n",arr[id].subject1);
printf("sub2 = %d\n",arr[id].subject2);
printf("sub3 = %d\n",arr[id].subject3);
printf("sub4 = %d\n",arr[id].subject4);
printf("sub5 = %d\n",arr[id].subject5);
}


/*********** Remove Function **********************/

void Remove(void)
{


printf("enter the id that you wanna remove it ! \n");
scanf("%d",&id);


arr[id].subject1=0;
arr[id].subject2=0;
arr[id].subject3=0;
arr[id].subject4=0;
arr[id].subject5=0;

}




/*********** edit Function **********************/

void edit(void)
{
int SubjectNumber;

// its a function that can edit

printf("enter the id that you wanna edit\n");

scanf("%d",&id);


while(1)
{


printf("which subject wanna edit !! to stop editing enter 0 \n");

scanf("%d",&SubjectNumber);

if(SubjectNumber == 0)
{
    break;
}


    switch (SubjectNumber)

    {
     case 1:
         printf("the old value was = %d plz enter your new \n",arr[id].subject1);
         scanf("%d",&arr[id].subject1);
         printf("your new value = %d Saved!! \n",arr[id].subject1);
     break;

     case 2:
         printf("the old value was = %d plz enter your new \n",arr[id].subject2);
         scanf("%d",&arr[id].subject2);
         printf("your new value = %d Saved!! \n",arr[id].subject2);
     break;


     case 3:
         printf("the old value was = %d plz enter your new \n",arr[id].subject3);
         scanf("%d",&arr[id].subject3);
         printf("your new value = %d Saved!! \n",arr[id].subject3);
     break;


     case 4:
         printf("the old value was = %d plz enter your new \n",arr[id].subject4);
         scanf("%d",&arr[id].subject4);
         printf("your new value = %d Saved!! \n",arr[id].subject4);
     break;


     case 5:
         printf("the old value was = %d plz enter your new \n",arr[id].subject5);
         scanf("%d",&arr[id].subject5);
         printf("your new value = %d Saved!! \n",arr[id].subject5);
     break;

    }

}


}
