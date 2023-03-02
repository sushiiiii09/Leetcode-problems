//brute force(checking for all possible indices)
class Solution {
    public:
    vector<int> twoSum(vector<int>& nums, int target){
        vector<int> ans; //declaring vector named "ans"
        for(int i=0; i<nums.size(); i++){
            for(int j=0; j<nums.size();j++){
                if(i !=j){ //to make sure that the output doesnt repeat
                if(nums[i] + nums[j]==target){
                    ans.push_back(i); //pushing iterator "i" in vector
                    ans.push_back(j); //vectorname.push_back(element)
                    return ans;
                }
                
                }
            }
        }
        return ans;
    }
}