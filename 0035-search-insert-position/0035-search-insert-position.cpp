class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int n= nums.size();
        int start=0;
        int last=n-1;
        int ans=n;
        while(start<=last){
            int mid=start+(last-start)/2;
            if(nums[mid]>=target){
            ans=mid;
            last=mid-1;}
        
            else{
                start=mid+1;
            }
        }
        return ans;
    }

};