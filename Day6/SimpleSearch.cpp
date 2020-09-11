
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int ar[n],value;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cin>>value;
    for(int i=0;i<n;i++)
        if(ar[i]==value){
            cout<<i;
            break;
        }
    return 0;
}