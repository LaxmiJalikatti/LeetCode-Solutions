class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int max_sum=0;
        for(int i=0;i<n-1;i++){
            for(int j=i+1;j<n;j++){
                max_sum=max(max_sum, nums[j]-nums[i]);
            }
        }
        if(max_sum>0){
        return max_sum;
        }
        return -1;
    }
};