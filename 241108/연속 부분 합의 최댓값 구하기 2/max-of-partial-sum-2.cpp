#include <vector>
#include <iostream>
#include <algorithm>
#include <climits>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int> board(n);
    for(int i=0;i<n;i++){
        cin>>board[i];
    }
    int result=INT_MIN;
    int sum=0;
    for(int i=0;i<n;i++){
        if(sum<0){
            sum=board[i];
        }else{
            sum+=board[i];
        }
        result=max(result, sum);
    }
    cout<<result;
}