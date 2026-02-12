class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
       unordered_map<int,int>mp;
        vector<int>ans;
        // int count==0;
        for(auto it:nums){
            mp[it]++;
        }
        int n=nums.size();
        int size=n/3;
        for(auto i:mp){
            if(i.second>size){
                ans.push_back(i.first);
            }
        }
        return ans;
    }
};