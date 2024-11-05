#include <vector>
#include <algorithm>
#include <iostream>
#include <climits>

using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> board(n+1);
    vector<int> L(n+2);
    vector<int> R(n+2);
    for(int i=0;i<n;i++){
        cin>>board[i+1];
        L[i+1]=max(board[i+1],L[i]);
    }
    for(int j=n;j>=1;j--){
        R[j]=max(R[j+1],board[j]);
    }
    // for(int i=1;i<=n;i++){
    //     cout<<L[i]<<' ';
    // }
    // cout<<endl;
    // for(int j=1;j<=n;j++){
    //     cout<<R[j]<<' ';
    // }
    cout<<endl;
    int result=INT_MIN;
    for(int i=3;i<n-1;i++){
        cout<<L[i-2]<<' '<<board[i]<< ' '<<R[i+2]<<endl;
        result=max(result, L[i-2]+board[i]+R[i+2]);
    }
    cout<<result;
}