#include <bits/stdc++.h>
using namespace std;

int partition(vector<int> &nums, int low, int high){
    int pivot = nums[low];
    int i = low;
    int j = high;
    do{
        while(nums[i]<=pivot && i<=high-1){
            i++;
        }
        while(nums[i]>=pivot && j>=low+1){
            j--;
        }

        if(i<j){
            swap(nums[i],nums[j]);
        }
    }while(i<j);
    swap(nums[j],pivot);
    return j;
}

void QuickSort(vector<int> &arr, int low, int high){
    if(low<high){
        int j = partition(arr,low,high);
        QuickSort(arr,low,j-1);
        QuickSort(arr,j+1,high);
    }
}

int main(){
    vector<int> arr = {4,2,6,9,2};
    int low = 0;
    int high = arr.size()-1;
    QuickSort(arr,low,high);

    for(auto it: arr){
        cout<<it<<" ";
    }
}