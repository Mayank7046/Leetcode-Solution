class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int start=0;
      int end=nums.size()-1;
      vector<int>ans;
      while(start<=end){
        if(nums[start]<target){
            start++;
        }
     else   if(nums[end]>target){
            end--;
        }
       else if(nums[start]==target && nums[end]==target){
            ans.push_back(start);
            ans.push_back(end);
             return {start,end};
        }
      }
     return {-1,-1};
    }
};
