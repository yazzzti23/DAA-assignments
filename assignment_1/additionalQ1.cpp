#include <bits/stdc++.h>
using namespace std;
// did it in the format of hackerearth since i solved it there first to pass all the testcases
int main(){
int T; 
cin>>T;   // test cases input

while(T--){
 int N,K;
 cin>>N>>K;
 vector<int> A(N);
 for(int i=0;i<N;i++) cin>>A[i];

 int low=0,high=0;
 for(int i=0;i<N;i++){
     low=max(low,A[i]);
     high=high|A[i];
 }

 int ans=high; // abhi ke liye max maan lo

 while(low<=high){
     int mid=(low+high)/2;
     int segments=1;
     int currOR=0;

     for(int i=0;i<N;i++){
         if((currOR|A[i])<=mid){
             currOR=currOR|A[i];
         }
         else{
             segments++;
             currOR=A[i]; // naya segment shuru
         }
     }

     if(segments<=K){
         ans=mid;
         high=mid-1; // chhota try karo
     }
     else{
         low=mid+1;
     }
 }

 cout<<ans<<endl;
}

return 0;
}
