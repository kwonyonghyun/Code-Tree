#include <vector>
#include <iostream>
#include <algorithm>
#include <queue>

using namespace std;
#define ll long long
int main(){
    int n;
    cin>>n;
    priority_queue<ll> pq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        pq.push(a);
    }
    while(pq.size()>1){
        int a=pq.top();
        pq.pop();
        int b=pq.top();
        pq.pop();
        if(a!=b){
            pq.push(abs(a-b));
        }
    }
    if(pq.empty()){
        cout<<-1;
    }else{
        cout<<pq.top();
    }
}