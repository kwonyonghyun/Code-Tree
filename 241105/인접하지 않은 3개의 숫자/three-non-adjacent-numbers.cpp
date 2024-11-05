#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> board(n+1);
    for(int i=0;i<n;i++){
        cin>>board[i+1];
    }
    int result=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=i+2;j<=n;j++){
            for(int k=j+2;k<=n;k++){
                result=max(result, board[i]+board[j]+board[k]);
            }
        }
    }
    cout<<result;
    return 0;
}