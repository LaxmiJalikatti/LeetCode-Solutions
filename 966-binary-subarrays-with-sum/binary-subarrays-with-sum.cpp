class Solution {
public:
    int mostSum(vector<int>& nums, int goal){
        int n=nums.size();
        if(goal < 0) return 0;
        int start =0, cur_sum=0, count =0;
        for(int end = 0;end < n; end++){
            cur_sum += nums[end];
            while(cur_sum > goal){
                cur_sum -= nums[start];
                start++;
            }
            count += (end-start+1);
        }
        return count;
    }
    int numSubarraysWithSum(vector<int>& nums, int goal) {
        return mostSum(nums,goal)-mostSum(nums,goal-1);
    }
};