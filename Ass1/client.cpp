#include "Student.h"
int main(){

    // Student::showx();

    
    Student s1;
    s1.display();
    Student s2(1,"chandhu",600);
    s2.display();

    Student *str=new Student;
    str->display();

    Student srr[2]={{12,"nandini",200},{13,"anjani",500}};
    for(int i=0;i<2;i++){
        srr[i].display();
    }
    delete str;

}
// d:\CPPDemo\CPP\Ass1>g++ *.cpp -o client.exe

// d:\CPPDemo\CPP\Ass1>.\client.exe