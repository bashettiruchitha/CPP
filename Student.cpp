#include<iostream>
#include<cstring>
using namespace std;

class Student
{
    int rollno;
    char studname[20];
    int marks;
    public:
    Student()
    {
        rollno=12;
        strcpy(studname,"ruchithaaa");
        marks=100;
    }
    Student(int rlno,const char *name,int stmarks)
    {
        rollno=rlno;
        strcpy(studname,name);
        marks=stmarks;
    
    }
    void display()
    {
        cout<<"the rollno is :"<<rollno<<"the name is "<<studname<<"the marks is"<<marks<<endl;

    }
    void show(){
        if(marks>200){
            cout<<"greater than 200 "<<studname<<endl;
        }else{
            cout<<"less than 200 "<<studname<<endl;
        }
    }
  
};
int main(){
    Student s1;
    s1.display();
    Student s2(1,"chandhu",600);
    s2.display();

    s1.show();
    s2.show();
  
    Student *str=new Student;
    str->display();

    Student srr[2]={{12,"nandini",200},{13,"anjani",500}};
    for(int i=0;i<2;i++){
        srr[i].display();
    }
   
    delete str;
}