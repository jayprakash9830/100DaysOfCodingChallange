#include<bits/stdc++.h>
using namespace std;

class Solution{
public:	
	int maxAND (int arr[], int n)
	{
	    sort(arr,arr+n);
	    int value,max=0;
	    for(int i=0;i<n-1;i++){
	        value=arr[i]&arr[i+1];
	        if(max<value)
	            max=value;
	    }
	return max;
	}
};

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        Solution ob;
        cout <<  ob.maxAND(arr,n)<<endl;
    }
    return 0;
}