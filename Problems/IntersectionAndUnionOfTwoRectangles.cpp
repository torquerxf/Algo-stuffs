#include <bits/stdc++.h>
using namespace std;

int area(pair<int, int>a, pair<int, int>b){
    return (b.second-a.second)*(b.first-a.first);
}

void solution(){

    vector<pair<int,int>> cd;
    int intersection_area=1,union_area;
    for(int i=0;i<4;i++){
        int x,y;cin>>x>>y;
        cd.push_back(make_pair(x, y));
    }

    int area1 = area(cd[0],cd[1]);
    int area2 = area(cd[2],cd[3]);

    // conditions when intersection area would be cero
    if(cd[0].first < cd[2].first){ //traditional way of input
        if(cd[1].second < cd[2].second) intersection_area = 0;
    }else{ //tricky input
        if(cd[3].second < cd[0].second) intersection_area = 0;
    }
    cout<<intersection_area<<endl;
    // sorting to get the coordinates of the intersecting rectangle
    sort(cd.begin(), cd.end());
    if(intersection_area != 0) intersection_area = area(cd[1],cd[2]);

    union_area = area1 + area2 - intersection_area;
    cout<<intersection_area<<" "<<union_area<<endl;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        solution();
    }
    return 0;
}