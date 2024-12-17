#include <iostream>
#include <vector>
#include <queue>
using namespace std;
#define ll long long
#define endl '\n'
int main(){
    priority_queue<ll,vector<ll>,greater<ll>> pq;
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        ll a;
        cin>>a;
        if(a==0){
            if(pq.empty()){
                cout<<0<<endl;
                continue;
            }
            cout<<pq.top()<<endl;
            pq.pop();
        }else{
            pq.push(a);
        }
    }
}