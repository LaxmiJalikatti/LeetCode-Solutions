class Solution {
public:
    bool canJump(vector<int>& nums) {
        int maxIndex=0;
        int sum=0;
        int n=nums.size();
        if(nums[0]==0 && n!=1) return false;
        for(int i=0;i<n;i++){
            if (i > maxIndex) {
                return false;
            }
            
            if(maxIndex>=n-1){
                return true;
            }
            if(i+nums[i]>maxIndex){
                maxIndex=i+nums[i];
            }
        }
        return false;
    }
};