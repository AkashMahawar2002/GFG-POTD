class Solution {
  public:
     void setMatrixZeroes(vector<vector<int>> &mat) {
        vector<pair<int, int>> zeroOccurs;
        
        for(int i=0; i<mat.size(); i++){
            for(int j=0; j<mat[0].size(); j++){
                if(mat[i][j] == 0){
                    zeroOccurs.push_back({i, j});
                }
            }
        }
        
        for(auto a: zeroOccurs){
            for(int i=0; i<mat.size(); i++){
                mat[i][a.second] = 0;
            }
            for(int j=0; j<mat[0].size(); j++){
                mat[a.first][j] = 0;
            }
        }
    }
};