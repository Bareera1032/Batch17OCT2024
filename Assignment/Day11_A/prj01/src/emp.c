#include <common.h>
#include <emp.h>

int getDetails(EMP *e)
{
   printf("\nEnter Employee Details\n");
   scanf("%d%d%d",&e->id,&e->phno,&e->salary);
   scanf("%s%s%s",e->title,e->fName,e->lName);
   getchar();
   scanf("%c"&e->gender);
}


int displatDetails(EMP *e)
{
   printf("\nEnter Employee Details\n");
   printf("\n========================\n");
   printf("\nID : %d",e->id);
   printf("\nTitle : %c",e->title);
   printf("\nFName : %s",e->fName);
   printf("\nLName : %s",e->lName);
   printf("\nGender : %c",e->gender);
   printf("\nPhoneNo : %d",e->phno);
   printf("\nSalary : %d",e->salary);
   printf("\n=======================\n");

 }


 int searchById(EMP *e,int id)
 { 
   if(e->id == id)
   {
      displayDetails(e);

    }
}

int searchByName(EMP *e,char lname[])
{
    if(strcpy(e->lName,lname)==0)
	{
	    displayDetails(e);
	   
    }
}

int searchBySalary(EMP *e)
{
   if(e->salary>6000 && e->salary<10000)
   {
      displayDetails(e);

   }

}

int updateDetails(EMP *e,int id)
{
    char lname[20];
	printf(
   
