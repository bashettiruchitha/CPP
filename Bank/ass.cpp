#include<iostream>
enum Category{PRIMARY , SECONDARY};
class Student
{
    unsigned int rollno;
    std::string sname;
    enum Category scat;
    int *marks;
    int nuberofsubjects;

    public:
    Student():rollno(1),sname("ruchi"),scat(Category::PRIMARY),nuberofsubjects(3){
        marks=new int[nuberofsubjects];
        marks[0]=0;
        marks[1]=0;
    }
    Student(int r,std::string name,enum Category c,int ns,int *mk):rollno(r),scat(c),sname(name),nuberofsubjects(ns){
        marks=new  int[nuberofsubjects];
        for(int i=0;i<nuberofsubjects;i++)
        {
            marks[i]=mk[i];
        }

    }
    void display()
    {
        std::cout<<"rollnumber ="<<rollno<<"name ="<<sname;
        switch(scat)
        {
            case Category::PRIMARY:
                std::cout<<"primary";
                break;
                case Category::SECONDARY:
                std::cout<<"secondary";
                break;
                default : std::cout<<"primary";
        }
        for(int i=0;i<nuberofsubjects;i++)
        {
            std::cout<<" "<<marks[i];
        }

    }
    void accept()
    {
        int cat;
        std::cout<<"\n enter a category 0-primary 1-secondary";
        std::cin>>cat;
         switch(cat)
         {
            case Category::PRIMARY:
               scat=Category::PRIMARY;
                break;
                case Category::SECONDARY:
                scat=Category::SECONDARY;
                break;
                default : std::cout<<"primary";
        }
    }
     float calAvg()
    {
        float sum=0;
        for(int i=0;i<nuberofsubjects;i++)
        {
            sum+=marks[i];
        }
        return sum/nuberofsubjects;
    }
      std::string getSname() const { return sname; }
};
 
    float findMaxAvg(Student s[],int n)
    {
        float *avg=new float[n];
        for(int i=0;i<n;i++)
        {
            avg[i]=s[i].calAvg();
            std::cout<<"\n avg "<<i<<" "<<avg[i];
        }
    
        // logic to max avg
        float max=avg[0];
        for(int i=1;i<n;i++)
        {
            if(avg[i]>max)
            max=avg[i];
        }
        return max;
       }
  
int main()
{
    int m1[3]={44,45,56};
    int m2[2]={21,26};
    Student s1[3]={{1,"ruchitha",Category::SECONDARY,3,m1},{2,"chandhu",Category::PRIMARY,2,m2}};
    float maxavg=findMaxAvg(s1,3);
    std::cout<<"\n max avg is "<<maxavg<<std::endl;


}



  // s1.display();
    // Student s2;
    // s2.accept();
    // s2.display();