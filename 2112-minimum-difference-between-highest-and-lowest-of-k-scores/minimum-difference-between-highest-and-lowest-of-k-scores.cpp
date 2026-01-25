class Solution {
public:
    int minimumDifference(vector<int>& nums, int k) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<k)
        return 0;
        int i=0,j=i+k-1;
        int maxi=INT_MAX;
        while(j<n){
            maxi=min(maxi,nums[j]-nums[i]);
            i++;
            j++;
        }
      
        
        return maxi;
    }
};