#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    priority_queue<int,vector<int>, greater<>> pq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pq.push(a);
    }
    if(n<3)[
        cout<<-1;
    ]
    int a=pq.top();
    pq.pop();
    int b=pq.top();
    pq.pop();
    int c=pq.top();
    pq.pop();
    cout<<a*b*c;
}