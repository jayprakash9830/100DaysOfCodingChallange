#include<iostream>
using namespace std;
int main(){
    int *p;
    float *q;
    char *r;
    int *ar=new int[5];
    p=new int(25);
    q=new float(2.5);
    r=new char('A');
    for(int i=0;i<5;i++)
        cin>>ar[i];
    cout<<"Value of P "<<*p<<" Adress "<<p<<endl;
    cout<<"Value of Q "<<*q<<" Adress "<<q<<endl;
    cout<<"Value of R "<<*r<<" Adress "<<r<<endl;
    for(int i =0;i<5;i++)
        cout<<"Value of R "<<ar[i]<<" Adress "<<&ar[i]<<endl;
   delete p;
   delete q;
   delete r;
   delete ar;
    cout<<*p;
    return 0;
}