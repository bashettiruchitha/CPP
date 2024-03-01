#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
const string em="";
const string x[]={em,"ONE","TWO","THREE","FOUR","FIVE","SIX",
"SEVEN","EIGHT","NINE","TEN","ELEVEN","TWELVE","THIRTEEN",
"FOURTEEN","FIFTEEN","SIXTEEN","SEVENTEEN","EIGHTEEN","NINETTEN"};

const string y[]={em,em,"TWENTY","THIRTY","FORTY","FIFTY","SIXTY","SEVENTY","EIGHTY","NINETY"};
string con1(int n,string suf)
{
    if(n ==0){
        return em;
    }
    if(n>19)
    {
        return y[n/10]+x[n%10]+suf;
    }
    else{
        return x[n]+suf;
    }
}
string con(int arr[]){
 
    for(int i=0;i<5;i++)
    {
        string rs;
        rs=con1((arr[i]%100),"");
    //this handles digits at ones and tens place
        if(arr[i]>100 && arr[i]%100)
        {
            rs = "and "+rs;
        }
        rs=con1(((arr[i]/100)%10),"HUNDRED")+rs;
        rs=con1(((arr[i]/1000)%100),"THOUSAND")+rs;
        rs=con1(((arr[i]/100000)%100),"LAKH")+rs;
        rs=con1(((arr[i]/10000000)%100),"CRORE")+rs;
        rs=con1(((arr[i]/1000000000)%100),"BILLION")+rs;
    
        cout<<rs<<endl;
    }

}
void des(int arr[],int size){
    sort(arr,arr+size,greater<int>());
    for(int i=0;i<size;++i){
        cout<<arr[i]<<""<<em<<endl;
    }

}
int main()
{
    int arr[]={536,666,1000,5,12};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<"output:"<<endl;
    des(arr,size);

    cout<<con(arr)<<endl;
    // int n;
    // cout<<"enter a  number:-";
    // cin>>n;
    // cout<<con(n)<<endl;
    return 0;
}