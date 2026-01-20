#include <bits/stdc++.h>
using namespace std;

long long Kaneki(long long N,long long H, long long W){
    //we need a range for side S 
    long long S;
	//range is min to max 
	long long l = max(W,H);
	long long r = max(W,H)*N;
	long long ans = r;
	while(l<=r){
	    long long mid = l + (r - l) / 2;
        long long nums = (mid/H) * (mid/W);

        if(nums>=N){
            ans = mid;
            r = mid-1;
        }
        else{
            l = mid+1;
        }
	}
	return ans;
}

int main() {
    int T;
    cin>>T;
	while(T--){
	    long long N,H,W;
	    cin>>N;
	    cin>>H;
	    cin>>W;
	    
	    cout<<Kaneki(N,H,W)<<endl;
	}

}
