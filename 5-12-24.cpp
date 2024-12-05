class Solution {
  public:
    void sort012(vector<int>& nums) {
        // code here
        //int n = arr.size(),start = 0,end= n-1;
        int low=0, mid=0, high=nums.size()-1;
        while(mid<=high){
            if(nums[mid]==0){
               swap(nums[mid], nums[low]);
               mid++;
               low++;
            }
            else if(nums[mid]==1){
                mid++;
            }
            else{
                swap(nums[mid], nums[high]);
                high--;
            }
        }
    }
    
};