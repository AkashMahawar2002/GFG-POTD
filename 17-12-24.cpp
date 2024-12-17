class Solution {
  public:

    bool canPlaceCows(vector<int> &arr,int k,int dist){
        int n = arr.size();
        int cntCow = 1;
        int lastPos = arr[0];
        for(int i=1;i<n;i++){
            if(arr[i] - lastPos >= dist){
                cntCow++; //place cow
                lastPos = arr[i];
            }
            if(cntCow == k){
                return true;
            }
        }
        return false;
        
    }
     
    int aggressiveCows(vector<int> &arr, int k) {

        // Write your code here
        //Binary Search
        //Pattern type -> min(of max)
        
        // Instead of storing answer variable use polarity principle
        
        int n = arr.size();
        sort(arr.begin(),arr.end());
        int s = 1,e = arr[n-1] - arr[0];
        while(s<=e){
            int mid = s + ((e-s)/2);
            if(canPlaceCows(arr,k,mid))
            {
                s = mid+1;
            }
            else{
                e = mid - 1;
            }
        }
        return e;
        
    }
};