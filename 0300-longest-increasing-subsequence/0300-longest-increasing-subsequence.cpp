class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        vector<int>tails(nums.size(),0);
        int m=1;
        tails[0]=1;
        for(int i=1;i<nums.size();i++){
            for(int j=i-1;j>=0;j--){
            if(nums[j]<nums[i]&&tails[i]<tails[j]){
                tails[i]=tails[j];
            }
            }
            tails[i]++;
            m=max(m,tails[i]);
        }
        return m ;
    }
};