#include <iostream>
#include <vector>
#include <climits>
#include <algorithm>
using namespace std;

int main() {
    int n,s;
    cin>>n>>s;
    vector<int> board;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        board.push_back(a);
    }
    int startIdx=0;
    int endIdx=0;
    int result=0;
    result+=board[0];
    int ans=INT_MAX;
    for(int i=0;i<n;i++){
        endIdx++;
        result+=board[endIdx];
        while(result>s){
            result-=board[startIdx];
            startIdx++;
            ans=min(ans, endIdx-startIdx+2);
        }
    }
    cout<<ans;
    return 0;
}