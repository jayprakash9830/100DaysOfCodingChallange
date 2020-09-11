#include<bits/stdc++.h>
using namespace std;
int main(){
    long long int n,big;
    cin>>n;
    long long int ar[n];
    int i,j;
    for(i=0;i<n;i++)
        cin>>ar[i];
    for(i=0;i<n-1;i++){
        for(j=i+1;j<n;j++)
            if(ar[i]<ar[j]){
                break;
            }
        if(j==n)
            cout<<ar[i]<<" ";
    }
    cout<<ar[n-1];
    return 0;
}