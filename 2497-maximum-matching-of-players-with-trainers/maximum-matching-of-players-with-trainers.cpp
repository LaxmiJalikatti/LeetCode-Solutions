class Solution {
public:
    int matchPlayersAndTrainers(vector<int>&a, vector<int>&b) {
        int m=a.size();
        int n=b.size();
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=0,j=0;
        int count=0;
        while(i<m && j<n){
            if(a[i]<=b[j]){
                count++;
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        return count;
    }
};