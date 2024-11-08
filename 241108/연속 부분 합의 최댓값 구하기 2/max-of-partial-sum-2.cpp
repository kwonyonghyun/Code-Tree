#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> numbers(n);
    for (int i = 0; i < n; i++) {
        cin >> numbers[i];
    }

    int maxSum = numbers[0];
    int currentSum = numbers[0];

    for (int i = 1; i < n; i++) {
        currentSum = max(numbers[i], currentSum + numbers[i]);
        maxSum = max(maxSum, currentSum);
    }

    cout << maxSum << endl;
    return 0;
}