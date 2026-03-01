class Solution {
public:
    int minPartitions(string n) {
        int ans =0;
        for(auto i:n){
            ans=max(ans,i-'0');
            if(ans==9) break;
        }
        return ans;
    }
};