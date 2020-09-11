#include<bits/stdc++.h>
using namespace std;
int main(){
   long long int n;
    cin>>n;
    long long int ar[n],sum=0,count=0,i;
    for(i=0;i<n;i++)
        cin>>ar[i];
    sort(ar,ar+n,greater<int>());
    for(i=0;i<n;i++){
        if(ar[i]>=0){
            sum+=ar[i];
            count++;
        }
        if(count==0&&ar[i]<=0){
            sum=ar[i];
            count=1;
            break;
        }
    }
    if(count==0){
        sum=0;
        count=1;
    }
    
    cout<<sum<<" "<<count;
    return 0;
}