#include <iostream>
#include <vector>
using namespace std;

class Solution {
  public:
    // Function to reverse a part of the array
    void reverse(vector<int>& arr, int low, int high) {
        while (low < high) {
            swap(arr[high], arr[low]);
            low++;
            high--;
        }
    }

    // Function to rotate an array by d elements in counter-clockwise direction
    void rotateArr(vector<int>& arr, int d) {
        int n = arr.size();
        d = d % n;  // Handle cases where d > n
        reverse(arr, 0, d - 1);  // Reverse the first d elements
        reverse(arr, d, n - 1);  // Reverse the rest of the array
        reverse(arr, 0, n - 1);  // Reverse the entire array
    }
};

int main() {
    int n, d;
    cout << "Enter the size of the array: ";
    cin >> n;
    cout << "Enter the number of rotations: ";
    cin >> d;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    Solution solution;
    solution.rotateArr(arr, d);

    cout << "Rotated array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
