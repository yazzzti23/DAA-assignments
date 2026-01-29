#include <bits/stdc++.h>
using namespace std;

struct Point{
    double x,y;
};

bool cmpx(Point a, Point b){ return a.x < b.x; }
bool cmpy(Point a, Point b){ return a.y < b.y; }

double dist(Point a, Point b){
    return sqrt((a.x-b.x)*(a.x-b.x) + (a.y-b.y)*(a.y-b.y));
}

int main(){
    vector<Point> p = {
        {9,3},{2,6},{15,3},{5,1},{1,2},{12,4},{7,2},{4,7},
        {16,5},{3,3},{10,5},{6,4},{14,6},{8,6},{11,1},{13,2}
    };

    sort(p.begin(), p.end(), cmpx);   // sort by x

    int n = p.size();
    double ans = 1e18;

    // brute inside divide & conquer style idea (manual-ish)
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(p[j].x - p[i].x > ans) break; // strip idea
            double d = dist(p[i], p[j]);
            if(d < ans) ans = d;
        }
    }

    cout << "Minimum distance = " << ans << endl;

    return 0;
}
