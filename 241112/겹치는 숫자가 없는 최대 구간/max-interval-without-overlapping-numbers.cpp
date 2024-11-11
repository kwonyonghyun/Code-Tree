#include <vector>
#include <iostream>
#include <algorithm>
#include <set>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> board;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        board.push_back(a);
    }
    int result=INT_MIN;
    int start=0;
    set<int> s;
    for(int end=0;end<n;end++){
        while(!s.empty() && s.find(board[end])!=s.end()){
            int tempSize=s.size();
            result=max(result, tempSize);
            s.erase(board[start++]);
        }
        s.insert(board[end]);
        int tempSize=s.size();
        result=max(result, tempSize);
    }
    cout<<result;
}