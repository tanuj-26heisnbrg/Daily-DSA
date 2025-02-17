// kadane's algorithm 

#include <bits/stdc++.h>
using namespace std;

void MaxSubarray(vector<int> &nums) {
    
    int sum = 0, maximum = nums[0];
    int start = 0, end = 0, tempStart = 0;

    for (int i = 0; i < nums.size(); i++) {
        sum += nums[i];

        if (sum > maximum) {
            maximum = sum;
            start = tempStart;
            end = i;
        }

        if (sum < 0) {
            sum = 0;
            tempStart = i + 1;
        }
    }

    cout << "Maximum Subarray Sum: " << maximum << endl;


    cout << "Subarray: ";
    for (int i = start; i <= end; i++) {
        cout << nums[i] << " ";
    }
    cout << endl;

 
    cout << "Subarray's index : " ;
    for(int i =start ; i<=end ; i++){
        cout<<i<<" ";
    }
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; i++) {
        cin >> nums[i];
    }

    MaxSubarray(nums);
    return 0;
}
