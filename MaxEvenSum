(* 1

One of the shops in HackerMall is offering discount coupons based on a puzzling problem. There are intags where each tag has a value denoted by valfil.
A customer needs to choose the tags in such a way that the sum of values is even.

The goal is to find the maximum possible even sum of values of tags that can be chosen.

Note: 2

It is guaranteed that there is at least one tag with an even value.

* The tags can have positive or negative values.

It can be possible to choose no tags at all *)





#include <iostream>
#include <vector>
#include <climits>  // For INT_MAX and INT_MIN
using namespace std;

int maxEvenSum(vector<int>& tags) {
    int totalsum = 0;
    int smallest_odd_pos = INT_MAX;  
    int largest_odd_neg = INT_MIN;   

    
    for (int val : tags) {
        total_sum += val;
        if (val % 2 != 0) {  // If the value is odd
            if (val > 0) {
                smallest_odd_pos = min(smallest_odd_pos, val);
            } else {
                largest_odd_neg = max(largest_odd_neg, val);
            }
        }
    }

    
    if (total_sum % 2 == 0) {
        return total_sum;
    }

    
    int result = total_sum;
    
    
    if (smallest_odd_pos != INT_MAX) {
        result = total_sum - smallest_odd_pos;
    }

    if (largest_odd_neg != INT_MIN) {
        result = max(result, total_sum - largest_odd_neg);
    }

    return result;
}

int main() {                                                                                                  
    vector<int> tags (n);
    
    int result = maxEvenSum(tags);
    
    cout << "Maximum possible even sum: " << result << endl;

    return 0;
}
