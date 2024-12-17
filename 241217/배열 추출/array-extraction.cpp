#include <vector>
#include <queue>
#include <vector>
#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    priority_queue<int> pq;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(pq.empty() && a==0){
            cout<<0<<endl;
            continue;
        }
        if(!pq.empty() && a==0){
            cout<<pq.top()<<endl;
            pq.pop();
            continue;
        }
        if(a!=0){
            pq.push(a);
        }
    }
}