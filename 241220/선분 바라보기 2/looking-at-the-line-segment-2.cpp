#include <iostream>
#include <map>
using namespace std;

int main() {
    int n;
    cin>>n;
    map<int,int> m;
    for(int i=0;i<n;i++){
        int y,x1,x2;
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