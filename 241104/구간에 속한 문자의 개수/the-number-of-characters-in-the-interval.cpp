#include <iostream>
#include <string>
#define MAX_N 1000

using namespace std;

int n, m, k;
int board[MAX_N + 1][MAX_N + 1][3];
int prefixSum[MAX_N + 1][MAX_N + 1][3];

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    
    cin >> n >> m >> k;
    
    for(int i = 1; i <= n; i++) {
        string input;
        cin >> input;
        for(int j = 0; j < m; j++) {
            board[i][j+1][input[j]-'a']++;
        }
    }
    
    for(int x = 0; x < 3; x++) {
        for(int i = 1; i <= n; i++) {
            for(int j = 1; j <= m; j++) {
                prefixSum[i][j][x] = board[i][j][x] + 
                                    prefixSum[i-1][j][x] + 
                                    prefixSum[i][j-1][x] - 
                                    prefixSum[i-1][j-1][x];
            }
        }
    }

    while(k--) {
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