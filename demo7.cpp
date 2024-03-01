#include<iostream>
#include<cstring>
using namespace std;
class  Student
{
    char sname[20];//array 
    int marks[3];
     int avg;
    public:
        Student(){
        strcpy(sname,"ruchitha");
         }
        Student(const char * name,int *mk){
            strcpy(sname,name);
            for(int i=0;i<3;i++){
            marks[i]=mk[i];
        }
    }
    int operator[](int index)
    {
        if(!(index>=0 && index<3)){
        throw "array index out of bounds";
    }
        return marks[index];
    }
    float calu( int marr[]){
        int sum=0;
       
        for(int i=0;i<3;i++){
            sum+=marr[i];
            avg=sum/3;
          
        }
          return avg;

        
    }
    void show(){
        cout<<sname<<endl;
        for(int i=0;i<3;i++){
            cout<<marks[i]<<endl;
        }
        cout<<"the average is"<<avg<<endl;
    }
    bool operator==( Student &s2){
        return this->avg==s2.avg ;
        // return calu() == s2.calu();
    }//return strcmp(sname,s2.sname);

     bool operator>(const Student &s2){
        return this->avg>s2.avg ;
    }
};
int main(){
    int marr[3]={77,88,21};
    Student s1("ruchi",marr);
    s1.calu(marr);
    s1.show();
   try{
    int mk=s1[1];
    cout<<mk;
   }catch(const char *msg){
    cout<<msg;
   }


    int marr2[3]={22,23,45};
    Student s2("chitra",marr2);
    s2.calu(marr2);
    s2.show();
    
    if(s1==s2){
        cout<<"s1 is equal to s2"<<endl;//not same


    }else{
        cout<<"s1 is not equal to s2"<<endl;//same
    }
    if(s1>s2){
        cout<<"s1 is greater than s2"<<endl;;

    }else{
        cout<<"s1 is less than s2"<<endl;
    }
  

    return 0;
}