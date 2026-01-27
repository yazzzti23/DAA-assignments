#include <bits/stdc++.h>
using namespace std;

void merge(vector<int> &nums, int low, int mid, int high){
    int i,j;
    vector<int> temp;
    i=low;
    j=mid+1;
    while(i<=mid && j<=high){
        if(nums[i]<nums[j]){
            temp.push_back(nums[i]);
            i++;
        }
        else{
            temp.push_back(nums[j]);
            j++;
        }
    }
    while(i<=mid){
        temp.push_back(nums[i]);
        i++;
    }
    while(j<=high){
        temp.push_back(nums[j]);
        j++;
    }
    for(int k=0; k<temp.size(); k++){
        nums[low+k] = temp[k];
    }
}

void MergeSort(vector<int> &arr,int l, int h){
    if(l<h){
        int mid = (l+h)/2;
        MergeSort(arr, l, mid);
        MergeSort(arr,mid+1,h);

        merge(arr,l,mid,h);
    }
}

int main(){
    vector<int> array1 = {12,11,13,5,6,7};
    int n = array1.size();
    int low = 0;
    int high = n-1;

    MergeSort(array1,low,high);
    for(auto it:array1){
        cout<<it<<" ";
    }
}