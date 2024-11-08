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
    vector<int> results;
    for(int i=0;i<n;i++){
        result+=board[i];
        if(result<0){
            results.push_back(result);
            result=0;
        }
    }
    results.push_back(result);
    cout<<*max_element(results.begin(), results.end());
    return 0;
}