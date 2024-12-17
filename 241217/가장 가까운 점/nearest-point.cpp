#include <iostream>
#include <vector>
#include <algorithm>
#include <queue>

using namespace std;

struct compare{
    bool operator()(pair<int,int> a, pair<int,int> b){
    if(abs(a.first)+abs(a.second)==abs(b.first)+abs(b.second)){
        if(a.first==b.first){
            return a.second>b.second;
        }
        return a.first>b.first;
    }
    return abs(a.first)+abs(a.second)>abs(b.first)+abs(b.second);
}
};

int main() {
    int n,m;
    cin>>n>>m;
    priority_queue<pair<int,int>,vector<pair<int,int>>, compare> pq;
    for(int i=0;i<n;i++){
        int a,b;
        cin>>a>>b;
        pq.push({a,b});
    }
    for(int i=0;i<m;i++){
        pair<int,int> a=pq.top();
        pq.pop();
        pq.push({a.first+2, a.second+2});
    }
    cout<<pq.top().first<<' '<<pq.top().second<<endl;
    return 0;
}