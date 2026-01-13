#include <bits/stdc++.h>
using namespace std;

int binarySearch(vector<int> &arr, int key){
    int n = arr.size();
    //checking if the array is sorted or not
   for(int i=1 ;i<n; i++){
    if(arr[i-1]>arr[i]){
        return -1;
    }
   }
   //applying binary serach
   int i=0;
   int j = n-1;
   while(i<j){
    int mid = (i+j)/2;
    if(arr[mid]==key){
        return mid;
    }
    else if(arr[mid]<key){
        i = mid+1;
    }
    else{
        j=mid-1;
    }
   }

}
int main(){
    vector<int> arr = {1,2,3,4,5,6};
    cout<<binarySearch(arr,6);
}
