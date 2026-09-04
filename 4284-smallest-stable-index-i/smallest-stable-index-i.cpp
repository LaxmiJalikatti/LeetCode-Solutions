class Solution {
public:
    int maxElement(vector<int>&nums, int n){
        int maxEl=nums[n];
        for(int j=0;j<=n;j++){
            maxEl=max(maxEl, nums[j]);
        }
        return maxEl;
    }
    int minElement(vector<int>&nums, int m){
        int n=nums.size();
        int minEl=nums[m];
        for(int j=n-1;j>=m;j--){
            minEl=min(minEl, nums[j]);
        }
        return minEl;
    }
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            int maxEl=maxElement(nums,i);
            int minEl=minElement(nums,i);
            if((maxEl-minEl)<=k){
                return i;
            }
        }
        return -1;
    }
};