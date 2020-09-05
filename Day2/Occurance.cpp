/*
    Code written by Jay Prakash Sah
    Question:- Find a number of occurance of a particular substring and a character in given string without using any inbuid function;
    Logic:- Run loop and try to compare if found then count after executing loop print value.
*/
#include<iostream>
using namespace std;
int main(){
    string str;
    int c=0,c1=0;
    string character;
    getline(cin,str,'\n');
    for(int i=0;i<str.length();i++){
        if(str[i]=='e')
            c++;
    }
    for(int i=0;i<str.length()-1;i++){
        if(str[i]=='i' && str[i+1]=='s')
            c1++;
    }
    cout<<"e is "<<c<<" times and is occurs "<<c1<<" times";
}