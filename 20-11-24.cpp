vector<int> findMajority(vector<int>& arr) {
        int n = arr.size();
        if (n == 1) {
            return arr;
        }

        vector<int> ans;
        int ele1 = -1, ele2 = -1, c1 = 0, c2 = 0;

        // First pass: Find potential majority elements
        for (int i = 0; i < n; i++) {
            if (arr[i] == ele1) {
                c1++;
            } else if (arr[i] == ele2) {
                c2++;
            } else if (c1 == 0) {
                ele1 = arr[i];
                c1 = 1;
            } else if (c2 == 0) {
                ele2 = arr[i];
                c2 = 1;
            } else {
                c1--;
                c2--;
            }
        }

        // Reset counts for validation
        c1 = 0, c2 = 0;

        // Second pass: Count occurrences of the candidates
        for (int i = 0; i < n; i++) {
            if (arr[i] == ele1) {
                c1++;
            } else if (arr[i] == ele2) {
                c2++;
            }
        }

        // Check if the candidates appear more than n/3 times
        if (c1 > n / 3) ans.push_back(ele1);
        if (c2 > n / 3) ans.push_back(ele2);

        // Sort the result before returning
        sort(ans.begin(), ans.end());
        return ans;
    }