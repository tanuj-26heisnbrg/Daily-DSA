#include <bits/stdc++.h>
using namespace std;

vector<int> largeSmall(int n) {
    vector<int> result;
    
    // Extract digits from the number
    while (n > 0) {
        int temp = n % 10;
        result.push_back(temp);
        n /= 10;
    }
    
    sort(result.begin(), result.end());
    if (result.size() > 1) {
        swap(result[0], result[result.size() - 1]);
    }
    
    return result;
}

int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;

    vector<int> result = largeSmall(n);
    
    cout << "Result: ";
    for (int num : result) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
