#include <bits/stdc++.h>
using namespace std;

void maxSubarray(vector<int> &nums){
    int n=nums.size();
    int sum = 0;
    int maxsum = INT_MIN;
    int best_start = 0;
    int best_end=0;
    int start = 0;
    for(int i=0; i<n; i++){
        sum +=nums[i];
        if(sum>nums[i]){
            maxsum = max(maxsum,sum);
            best_start = start;
            best_end = i;
        }
        else{
            sum = nums[i];
            start = i;
            maxsum = max(maxsum,sum);
        }
    }
    cout<<"maxum is: "<<maxsum<<endl;
    for(int i=best_start ;i<=best_end; i++){
        cout<<nums[i]<<" ";
    }
    return;
}

int main(){
    vector<int> arr = {-2, -5, 6, -2, -3, 1, 5, -6};
    maxSubarray(arr);
}