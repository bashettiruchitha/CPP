#include "Student.h"

// void Student::showx()
// {
//     cout<<x;
// }

Student::Student()
{
     rollno=12;

        strcpy(studname,"chandhu");
        marks=2000;
}

Student::Student(int roll, const char *name, int stmarks)
{
    
        rollno=roll;
    
        strcpy(studname,name);
        marks=stmarks;
}

void Student::display()
{
    cout<<"the rollno is :"<<rollno<<"the name is "<<studname<<"the marks is"<<marks<<endl;
}
