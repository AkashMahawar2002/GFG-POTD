class Solution {
  public:
    vector<int> countDistinct(vector<int> &arr, int k) {
        int n = arr.size();
        vector<int> ans;
        unordered_map<int, int> freq;

        // Initialize the first window
        for (int i = 0; i < k; i++) {
            freq[arr[i]]++;
        }
        ans.push_back(freq.size()); // Add the distinct count of the first window

        // Slide the window
        for (int i = k; i < n; i++) {
            // Remove the element that goes out of the window
            freq[arr[i - k]]--;
            if (freq[arr[i - k]] == 0) {
                freq.erase(arr[i - k]);
            }

            // Add the new element to the window
            freq[arr[i]]++;

            // Add the distinct count of the current window
            ans.push_back(freq.size());
        }

        return ans;
    }
};