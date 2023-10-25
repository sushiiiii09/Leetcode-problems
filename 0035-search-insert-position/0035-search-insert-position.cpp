class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int low=0;
        int high=nums.size();
        if(target>nums[high-1]){
            return high;
            //if last element is the answer
        }
        while(low<=high){
           int mid=(low+high)/2;
            if(nums[mid]==target){
                return mid;
            }
            if(target<nums[mid]){
                high=mid-1;
            }else{
                low=mid+1;
            }
        }
        return low;
    }
};