class Solution {
  public:
    bool matSearch(vector<vector<int>> &mat, int x) {
        int i=mat[0].size()-1,j=0;
        while(i>=0 && j<mat.size()){
            if(mat[j][i]==x) return true;
            if(mat[j][i]>x) i--;
            else j++;
        }
        return false;
    }


};