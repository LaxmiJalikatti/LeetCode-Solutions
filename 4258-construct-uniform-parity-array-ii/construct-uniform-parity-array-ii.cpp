class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int mn=INT_MAX;
        bool has_odd=false;
        for(int num:nums1){
            if(num<mn){
                mn=num;
            }
            if(num%2!=0){
                has_odd= true;
            }
        }
        if(mn%2!=0){
            return true;
        }
        return !has_odd;
    }
};