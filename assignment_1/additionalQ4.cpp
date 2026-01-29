#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    long long k;
    cin >> n >> k;

    vector<long long> a(n);
    for(int i=0;i<n;i++) cin >> a[i];

    map<long long,long long> mp;
    for(int i=0;i<n;i++) mp[a[i]]++;   // freq bana li

    vector<long long> vals;
    for(auto x: mp) vals.push_back(x.first);

    int m = vals.size();
    vector<long long> greater(m);

    long long suff = 0;

    // right se count kitne bade hain
    for(int i=m-1;i>=0;i--){
        greater[i] = suff;   // isse bade kitne hain
        suff += mp[vals[i]];
    }

    long long ans = 0;

    for(int i=0;i<m;i++){
        if(greater[i] >= k){
            ans += vals[i] * mp[vals[i]]; // sab same value wale add
        }
        // warna ignore
    }
    cout << ans;

    return 0;
}
