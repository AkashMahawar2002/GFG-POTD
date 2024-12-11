class Solution {
  public:
    void mergeArrays(vector<int>& a, vector<int>& b) {
        // code here
           int m=a.size();
        int n=b.size();
        int i=m-1;
        int j=0;
        int temp=0;
        while(i>=0 && j<n){
            if(a[i]>b[j]){
                temp=a[i];
                a[i]=b[j];
                b[j]=temp;
                i--;
                j++;
            }
            else break;
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        
    
    }
};