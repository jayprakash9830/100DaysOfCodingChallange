//Author Jay Prakash Sah
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--){
	    int n;
	    cin>>n;
	    long int ar[n];
	    for(int i=0;i<n;i++)
	        cin>>ar[i];
	   for(int i=0;i<n;i+=2){
	       if(ar[i]!=ar[i+1]){
	        cout<<ar[i]<<endl;
	        break;
	       }
	   }
	}
	return 0;
}