class Solution {
public:
    int reverseDegree(string s) {
        int total=0;
        for(int i=0;i<s.length();i++){
            char c=s[i];
            int val=26-(c-'a');
            total=total+val*(i+1);
        }
        return total;
    }
};