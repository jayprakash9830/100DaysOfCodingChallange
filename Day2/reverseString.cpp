/*Code Written by Jay Prakash Sah 
    Question:-Write a program to reverse any string without sing Inbuild function.
    Logic is simly execute a loop in decending order that means from length to 0
*/
#include<iostream>
using namespace std;
int main(){
    string str;
    getline(cin,str,'\n');
    for(int i=str.length();i>=0;i--)
        cout<<str[i];
    return 0;
}