#include<iostream>

enum{MAX_DAYS = 31};
class Temperatur
{
    int *temp;
    int noofdays;
   
    public:
    Temperatur():noofdays(2)
    {
        temp=new int[noofdays];
        temp[0]=0;
        temp[1]=0;
    }
    Temperatur(int days,int *te):noofdays(days)
    {
          temp=new int[noofdays];
          for(int i=0;i<noofdays;i++){
            temp[i]=te[i];
          }
    }
    void display(){
        for(int i =0;i<noofdays;i++)
        {
            std::cout<<"\n temperature is :"<<temp[i]<<" \n for the day  "<<i+1<<std::endl;
            std::cout<<"\n -------------";
        }
        // std::cout<<"temperature is :"<<temp<<" no of days "<<noofdays;
    }
    double caltemp(){
        double ce = 0;
       for(int i=0;i<noofdays;i++){
        // std::cout<<"record on "<<i+1<<" is "<<t[i];
        // ce=(f-32.0)*5.0/9.0;
        ce +=(temp[i]-32.0)*5.0/9.0;
       }
       return ce/noofdays;
    }
    void max()
    {
        int maxtemp=temp[0];
        for(int i=0;i<noofdays;i++){
            if(temp[i]>maxtemp)
            {
                maxtemp=temp[i];
            }
        }
        std::cout<<" \n max temperature is "<<maxtemp<<std::endl;
    }
    void printtemp(int days)
    {
        if(days >= 1 && days <= noofdays){
            std::cout<<"temperature for the day "<<days<<"is "<<temp[days -1]<<std::endl;
        }else
        {
            std::cout<<"invalid day entered"<<std::endl;
        }
    }

    int getNoofdays() const { return noofdays; }
    

};
int main()
{
    int t1[3]={78,89,56};
    int t2[8]={45,67,89,91,94,92,94,85};
    int t3[4]={78,89,87,94};
    Temperatur t[3]={{3,t1},{8,t2},{4,t3}};
    for(int i=0;i<3;i++){
     t[i].display();
     t[i].max();
     std::cout<<"\n average tempe is "<<t[i].caltemp()<<" \n celsius"<<std::endl;
    // t->caltemp();

    }
    int day;
    // std::cout<<"enter the day \n"<<t[0].getNoofdays()<<"";
    std::cout<<"enter the day \n"<<MAX_DAYS<<" ";
    std::cin>>day;
    for(int i=0;i<3;i++){
        t[i].printtemp(day);
    }
    
    
}