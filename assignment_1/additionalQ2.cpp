#include<bits/stdc++.h>
using namespace std;
//using two pointer approach 
int solve (int n, vector<int> a) {
    sort(a.begin(),a.end());
    int i = 0;
    int j = 0;
    int maxlength = 0;
    while(i<n && j<n ){
        if((a[j]-a[i]) <= 10){
            maxlength = max(maxlength, (j-i+1));
            j++;
        }
        else{
            while((a[j]-a[i])>10){
                i++;
            }
        }
    }
    return maxlength;
}

int main() {

    ios::sync_with_stdio(0);
    cin.tie(0);
    int N;
    cin >> N;
    vector<int> A(N);
    for(int i_A = 0; i_A < N; i_A++)
    {
    	cin >> A[i_A];
    }

    int out_;
    out_ = solve(N, A);
    cout << out_;
}