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
        if(i<2){
            cout<<-1<<endl;
        }else{
            int a=pq.top();
            pq.pop();
            int b=pq.top();
            pq.pop();
            int c=pq.top();
            pq.pop();
            cout<<(long long)a*b*c<<endl;
            pq.push(a);
            pq.push(b);
            pq.push(c);
        }
    }
}