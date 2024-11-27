class Solution {
  public:
    // Function to find the smallest positive number missing from the array.
    int missingNumber(vector<int> &arr) {
        // Your code here
        stack<int> st;
        sort(arr.begin(), arr.end());

        for (int i = 0; i < arr.size(); i++) {
            int num = arr[i];
            if (num <= 0) {
                if (!st.empty()) {
                    st.pop();
                }
            } else {
                if (st.empty()) {
                    if (num == 1) {
                        st.push(num);
                    } else {
                        return 1;
                    }
                } else {
                    if (num == st.top() || num == st.top() + 1) {
                        st.push(num);
                    } else if (num > st.top() + 1) {
                        return st.top() + 1;
                    }
                }
            }
        }
        if (!st.empty()) {
            return st.top() + 1;
        }

        return 1;
    }
};