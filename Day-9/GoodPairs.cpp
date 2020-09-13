//Author Jay Prakash Sah
#include <iostream>
#include<bits/stdc++.h>
using namespace std;

int main() {
	//code
	int tc;
	cin>>tc;
	while(tc--){
	    long long int size,count=0;
	    cin>>size;
	    int ar[size];
	    for(int i=0;i<size;i++)
	        cin>>ar[i];
	    sort(ar,ar+size);
	    for(int i=0;i<size-1;i++)
	        for(int j=i+1;j<size;j++)
	            if(ar[i]<ar[j])
	                count++;
	   cout<<count<<endl;
	}
	return 0;
}