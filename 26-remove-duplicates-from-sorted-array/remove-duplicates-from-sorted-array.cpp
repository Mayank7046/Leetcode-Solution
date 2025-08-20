class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    unordered_set<int> seen;
    vector<int> ans;

    for (int num : nums) {
        if (seen.find(num) == seen.end()) {
            seen.insert(num);
            ans.push_back(num);
        }
    }

    nums = ans;  // overwrite original nums
    return nums.size();


    }
};