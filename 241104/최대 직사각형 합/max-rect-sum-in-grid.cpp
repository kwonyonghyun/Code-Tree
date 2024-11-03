#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<vector<int>> board(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            cin>>board[i][j];
        }
    }
    vector<vector<int>> prefixSum(n+1,vector<int>(n+1));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            prefixSum[i][j]=prefixSum[i - 1][j] + prefixSum[i][j - 1] - prefixSum[i - 1][j - 1] + board[i][j];
        }
    }
    int result=INT_MIN;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            for(int x=i;x<=n;x++){
                for(int y=j;y<=n;y++){
                    result=max(result, prefixSum[x][y]-prefixSum[x-i][y]-prefixSum[x][y-j]+prefixSum[x-i][y-j]);
                }
            }
        }
    }
    cout<<result;
    return 0;
}
//-1000 1000 이하의 숫자로만 이루어진 n*n 크기의 2차원 격