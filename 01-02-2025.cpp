class Solution {
  public:
    bool solve(vector<vector<char>> &mat,int i,int j,int n,int m,int index,string &word){
        if(mat[i][j]!=word[index]) return false;
        
        if(index==word.length()-1) return true;
        
        char ch=mat[i][j];
        mat[i][j]='$';
         
        bool found=false;
        if(i>0 and !found){
            found=solve(mat,i-1,j,n,m,index+1,word);//Top
        }
        if(i<n-1 and !found){
            found=solve(mat,i+1,j,n,m,index+1,word);//Down
        }
        if(j>0 and !found) {
            found=solve(mat,i,j-1,n,m,index+1,word);//Left
        }
        if(j<m-1 and !found){
            found=solve(mat,i,j+1,n,m,index+1,word);//Right
        }
        mat[i][j]=ch;
        return found;
    }
    bool isWordExist(vector<vector<char>>& mat, string& word) {
        // Code here
        for(int i=0;i<mat.size();i++){
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==word[0]){
                    if( solve(mat,i,j,mat.size(),mat[i].size(),0,word)){
                        return true;
                    }
                }
            }
        }   
        return false;
    }
 


};