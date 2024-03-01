#include<iostream>
#include<cstdlib>
// #include<ctime>
using namespace std;
int gn(){
    return rand()%10;
}
char gnro(){
    return rand()%2 == 0 ? '+':'-';
}
int main()
{
    int crt=0;
    int total =5;
    for(int i=1;i<=total;i++){
        int num1=gn();
        int num2=gn();
        char op=gnro();
        cout<<"question "<<i<<"what is "<<num1<<op<<num2<<"?";
        int user;
        cout<<"ans";
        cin>>user;
        int ca=(op == '+')?num1+num2:num1-num2;
        if(user==ca){
            cout<<"correct"<<endl;
            crt++;
        }else{
            cout<<"incorrect  the crt answer is "<<ca<<endl;
        }
        cout<<endl;
    }
    // double sc=(static_cast<double>(crt)/total)*100;
    double sc=(double(crt)/total)*100;

    cout<<"quiz summary "<<endl;
    cout<<"total questions"<<total<<endl;
    cout<<"crt answers:"<<crt<<endl;
    cout<<"incrt ansers"<<total-crt<<endl;
    cout<<"score:"<<sc<<"%"<<endl;
    return 0;
    
}