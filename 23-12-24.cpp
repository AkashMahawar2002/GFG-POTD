class Solution {
  public:
    // Function to search a given number in row-column sorted matrix.
    bool searchRowMatrix(vector<vector<int>> &mat, int x) {
        // code here
        int N = mat.size();
        for(int i=0;i<N;i++){
            if(binary_search(mat[i].begin(), mat[i].end(), x)){
                return true;
            }
        }
        return false;
    }
};