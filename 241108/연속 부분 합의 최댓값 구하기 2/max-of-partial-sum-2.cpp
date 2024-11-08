#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin>>n;
    vector<int> board(n);
    for(int i=0;i<n;i++){
        cin>>board[i];
    }
    int result=0;
    for(int i=0;i<n;i++){
        result+=board[i];
        if(result<0){
            result=0;
        }
    }
    cout<<result;
    
    return 0;
}