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
    bool flag=false;
    for(int i=0;i<n;i++){
        result+=board[i];
        if(result<0){
            result=0;
        }else{
            flag=true;
        }
    }
    if(flag){
        cout<<result;
    }else{
        cout<<*max_element(board.begin(), board.end());
    }
    
    return 0;
}