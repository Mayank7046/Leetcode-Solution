class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n = nums.size();
        int s = -1; 
        int e = -1;
        for (int i = 0; i < n; i++) {
            if (nums[i] == target) {
                s = i; 
                break;
            }
        }
        if (s == -1)
            return {-1, -1}; 
        for (int i = n - 1; i >= 0; i--) {
            if (nums[i] == target) {
                e = i;
                break;
            }
        }
        return {s, e};
    }
};
