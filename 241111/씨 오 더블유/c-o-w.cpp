#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;
int main() {
    int n;
    string input;
    cin>>n;
    cin>>input;
    vector<int> L(n+1);
    vector<int> R(n+1);
    for(int i=1;i<=input.size();i++){
        if(input[i-1]=='C'){
            L[i]=L[i-1]+1;
        }else{
            L[i]=L[i-1];
        }
    }
    for(int i=input.size();i>=2;i--){
        if(input[i-1]=='W'){
            R[i]=R[i+1]+1;
        }else{
            R[i]=R[i+1];
        }
    }
    long long result=0;
    for(int i=1;i<n-1;i++){
        if(input[i]=='O'){
            result+=L[i]*R[i+2];
        }
    }
    cout<<result;
    return 0;
}