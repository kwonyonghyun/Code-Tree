#include <iostream>
#include <map>
using namespace std;
#define ll long long
int main() {
    int n;
    cin>>n;
    map<ll,ll> m;
    for(int i=0;i<n;i++){
        ll y,x1,x2;
        cin>>y>>x1>>x2;
        if(m.find(x1)==m.end()){
            m[y]=x1;
        }else{
            m[y]=min(m[y],x1);
        }
    }
    cout<<m.size();
    return 0;
}