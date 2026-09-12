class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int leftSum=0;
        int rightSum;
        for(int i=0;i<n;i++){
            rightSum=sum-leftSum-nums[i];
            if(leftSum==rightSum) return i;
            else leftSum+=nums[i];
        }
        return -1;
         
    }
};