class Solution {
public:
    bool isHappy(int n) {
        unordered_set<int>s;
        
        while(true){
            int sum=0;
            while(n!=0){
            int digit = n%10;
            sum += digit*digit;
            n=n/10;
            }
            if(sum==1) return true;
            n=sum;
            if(s.count(n)) return false;
            s.insert(n);
        }
        return -1;
    }
};