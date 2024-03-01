#include<iostream>
#include<cstring>
using namespace std;
class  Student
{
    char sname[20];//array 
    public:
    Student(){
        strcpy(sname,"ruchitha");
    }
    Student(const char * name){
        strcpy(sname,name);
    }
    void show(){
        cout<<"name="<<sname<<endl;
    }
    char operator[](int index){
        if(!(index>=0 && index<strlen(sname))){//it throw the exception when the range 
            throw "index out of range ";
             return sname[index];
        }
       
    }
};
int main(){
    Student s1("chitra");//student s1 object
    try{
    char ch=s1[-8];//subscript operator
    cout<<"ch= "<<ch<<endl;
    }
    catch(const char *msg){
        cout<<msg;
    }
    Student s2;
    s2.show();


    return 0;
}