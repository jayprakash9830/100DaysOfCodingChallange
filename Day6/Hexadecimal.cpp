#include<bits/stdc++.h>
using namespace std;
int gcd(int a,int b){
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int sumofdigit(int value){
	int sum=0;
	while(value>0){
		sum+=value%16;
		value/=16;
	}
	return sum;
}
int main(){
	int tc;
	cin>>tc;
	while(tc>0){
		int l,r,c=0;
        cin>>l>>r;
		for(int i=l;i<=r;i++){
			if(gcd(i,sumofdigit(i))>1)
				c++;
		}
		cout<<c<<endl;
        tc--;
	}
	return 0;
}