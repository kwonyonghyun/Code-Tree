#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
using namespace std;

int main(){
    int n,m;
    cin>>n>>m;
    vector<int> board;
    set<int> s;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        if(s.find(a)==s.end()){
            s.insert(a);
        }else{
            break;
        }
    }
    cout<<s.size();
}