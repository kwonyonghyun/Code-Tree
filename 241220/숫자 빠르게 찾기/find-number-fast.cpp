#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
#define endl '\n'
int main() {
    int n,m;
    cin>>n>>m;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    for(int i=0;i<m;i++){
        int a;
        cin>>a;
        if(find(v.begin(), v.end(), a)==v.end()){
            cout<<-1<<endl;
        }else{
            cout<<find(v.begin(), v.end(), a)-v.begin()+1<<endl;
        }
    }
    return 0;
}