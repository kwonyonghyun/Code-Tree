#include <iostream>
#include <climits>
#include <vector>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n;
    cin >> n;
    
    vector<vector<int>> board(n+1, vector<int>(n+1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            cin >> board[i][j];
        }
    }
    vector<vector<int>> prefixSum(n+1, vector<int>(n+1, 0));
    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= n; j++) {
            prefixSum[i][j] = prefixSum[i-1][j] + prefixSum[i][j-1] - prefixSum[i-1][j-1] + board[i][j];
        }
    }
    
    int result = INT_MIN;
    for(int i1 = 1; i1 <= n; i1++) {
        for(int j1 = 1; j1 <= n; j1++) {
            for(int i2 = i1; i2 <= n; i2++) {
                for(int j2 = j1; j2 <= n; j2++) {
                    int sum = prefixSum[i2][j2] 
                           - prefixSum[i1-1][j2] 
                           - prefixSum[i2][j1-1] 
                           + prefixSum[i1-1][j1-1];
                    result = max(result, sum);
                }
            }
        }
    }
    
    cout << result;
    return 0;
}