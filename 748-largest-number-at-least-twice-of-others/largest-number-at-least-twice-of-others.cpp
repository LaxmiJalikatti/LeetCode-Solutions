class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max_ele=-1;
        int max_idx;
        for(int i=0;i<nums.size();i++){
            if (nums[i] > max_ele) {
                max_ele = nums[i];
                max_idx = i;
            }
        }
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]*2>max_ele&& nums[i]!=max_ele){
                return -1;
            }
        }
        return max_idx;
    }
};