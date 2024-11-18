#include <iostream>
#include <vector>
using namespace std;
class solution {
public:
    void reverse(vector<int>& arr) {
        int n = arr.size(); // Use size_t for consistency
        int low = 0;        // Declare as size_t
        int high = n - 1;   // Declare as size_t
        while (low < high) {
            swap(arr[low], arr[high]);
            low++;
            high--;
        }
    }
};

int main() {
    solution obj;
    vector<int> arr={1,2,3,4,5};
    obj.reverse(arr);
    cout<<"Reversed array: ";
    for(int i=0; i<arr.size(); i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}