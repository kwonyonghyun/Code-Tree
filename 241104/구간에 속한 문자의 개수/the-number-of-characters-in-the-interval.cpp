#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n, m, k;
    cin >> n >> m >> k;
    
    vector<vector<vector<int>>> board(n+1, vector<vector<int>>(m+1, vector<int>(3, 0)));
    
    for(int i = 1; i <= n; i++) {
        string input;
        cin >> input;
        for(int j = 0; j < m; j++) { 
            board[i][j+1][input[j]-'a']++; 
        }
    }
    
    vector<vector<vector<int>>> prefixSum(n+1, vector<vector<int>>(m+1, vector<int>(3, 0)));


    for(int i = 1; i <= n; i++) {
        for(int j = 1; j <= m; j++) {  
            for(int x = 0; x < 3; x++) {
                prefixSum[i][j][x] = board[i][j][x] + 
                                    prefixSum[i-1][j][x] + 
                                    prefixSum[i][j-1][x] - 
                                    prefixSum[i-1][j-1][x];
            }
        }
    }

    for(int i = 0; i < k; i++) {
        int x1, y1, x2, y2;
        cin >> x1 >> y1 >> x2 >> y2;
        for(int x = 0; x < 3; x++) {
            cout << prefixSum[x2][y2][x] - 
                    prefixSum[x1-1][y2][x] -   
                    prefixSum[x2][y1-1][x] + 
                    prefixSum[x1-1][y1-1][x] << ' ';  
        }
        cout << '\n';
    }
    
    return 0;
}