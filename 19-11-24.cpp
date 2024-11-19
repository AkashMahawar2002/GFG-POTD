#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution {
public:
    void nextPermutation(vector<int>& arr) {
        int n = arr.size();
        int peak = -1;

        for (int i = n - 2; i >= 0; i--) {
            if (arr[i] < arr[i + 1]) {
                peak = i;
                break;
            }
        }

        if (peak == -1) {
            reverse(arr.begin(), arr.end());
            return;
        }

        for (int i = n - 1; i > peak; i--) {
            if (arr[peak] < arr[i]) {
                swap(arr[peak], arr[i]);
                break;
            }
        }

        reverse(arr.begin() + peak + 1, arr.end());
    }
};

int main() {
    vector<int> nums1 = {3, 2, 1};
    vector<int> nums2 = {2, 4, 1, 7, 5, 0};

    Solution solution1;
    Solution solution2;

    cout << "Original Array 1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    solution1.nextPermutation(nums1);

    cout << "Next Permutation 1: ";
    for (int num : nums1) {
        cout << num << " ";
    }
    cout << endl;

    cout << "Original Array 2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    solution2.nextPermutation(nums2);

    cout << "Next Permutation 2: ";
    for (int num : nums2) {
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
