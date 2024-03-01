#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int rollno;

    char studname[20];
    int marks;
    public:
    static void showx();
    Student();
    Student(int roll,const char *name,int stmarks);
    void display();
};
