#include<bits/stdc++.h>
using namespace std;

long long SimilarElementsPairs (long long int A[],int N) {
   long long n=0,k=0,count=0;
   sort(A,A+N);
   for(int i=0;i<N;i++){
      if(A[i+1]==A[i]+1){ 
         n++;
      }
      else if(A[i]==A[i+1]){
         n++;
         k++;
      }
      else{
         if(n!=k){
            count+=(n*(n+1))/2;
         }
      n=0;
      k=0;
      }
   }
   return count;
}

int main() {
    int N;
    cin >> N;
    long long int A[N];
    for(int i=0; i<N; i++)
    {
    	cin >> A[i];
    }

    long long out_;
    out_ = SimilarElementsPairs(A,N);
    cout << out_;
}