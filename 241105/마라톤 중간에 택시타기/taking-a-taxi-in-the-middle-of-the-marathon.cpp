#include <vector>
#include <climits>
#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<pair<int,int>> board(n+1);
    vector<int> L(n+1);
    vector<int> R(n+1);
    
    for(int i=1;i<=n;i++){
        cin>>board[i].first>>board[i].second;
    }
    
    for(int i=2;i<=n;i++){
        L[i]=L[i-1]+abs(board[i].first-board[i-1].first)+abs(board[i].second-board[i-1].second);
    }
    
    for(int i=n-1;i>=1;i--){
        R[i]=R[i+1]+abs(board[i].first-board[i+1].first)+abs(board[i].second-board[i+1].second);
    }
    
    int result = INT_MAX;
    for(int i=2;i<n;i++){
        int skip_dist = L[i-1] + 
                       abs(board[i-1].first - board[i+1].first) + 
                       abs(board[i-1].second - board[i+1].second) + 
                       R[i+1];
        result = min(result, skip_dist);
    }
    
    cout << result;
    return 0;
}