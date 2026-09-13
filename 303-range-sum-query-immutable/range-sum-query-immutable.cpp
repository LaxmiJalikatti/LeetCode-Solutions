class NumArray {
public:
    vector<int>a;
    NumArray(vector<int>& nums) {
        int sum=0;
        int n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
            a.push_back(sum);
        }
    }
    
    int sumRange(int left, int right) {
        int k;
        if(left==0)
            return a[right];
        k=a[right]-a[left-1];
        return k;
    }
};

/**
 * Your NumArray object will be instantiated and called as such:
 * NumArray* obj = new NumArray(nums);
 * int param_1 = obj->sumRange(left,right);
 */