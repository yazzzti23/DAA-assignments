#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    if(n==1){
        cout << a[0];
        return 0;
    }

    long long mx1 = -1e18 , mx2 = -1e18;
    for(int i=0;i<n;i++){
        if(a[i] > mx1){
            mx2 = mx1;
            mx1 = a[i];
        }
        else if(a[i] > mx2){
            mx2 = a[i];
        }
    }
    cout << mx1 + mx2;  // final answer bro

    return 0;
}
