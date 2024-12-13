#ifndef EMP_H
#define EMP_H

typedef struct Employee
{
      int id;
	  int phno;
	  int sal;
	  char fName[20];
	  char lName[20];
	  char title[4];
	  char gender;

}EMP;

int scanDetails(EMP *);
int displayDetails(EMP *);
int searchById(EMP *);
int searchBylName(EMP *);
int searchBySalary(EMP *);
int updateDetails(EMP *);

#endif
