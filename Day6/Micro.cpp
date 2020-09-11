#include<bits/stdc++.h>
using namespace std;
int main(){
    int tc;
    cin>>tc;
    while(tc>0){
        int n,k,c=0,i,j;
        cin>>n>>k;
        int ar[n];
        for(i=0;i<n;i++)
            cin>>ar[i];
        for(i=0;i<n;i++)
            for(j=i+1;j<n;j++)
                if(ar[i]>ar[j]){
                    int temp=ar[j];
                    ar[j]=ar[i];
                    ar[i]=temp;;
            }
        for(i=0;i<n;i++)
            cout<<ar[i]<<" ";
        for(i=0;i<n;i++){
            // if(ar[i]<k){
            //     c++;
            //     for(int j=0;j<n;j++){
            //         ar[j]=ar[j]+1;
            //     }
            //     i--;
            // }
            cout<<ar[i]<<" ";
        }
        cout<<c<<endl;
        tc--;
    }
    return 0;
}