class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
    set<int>set;
    for(int it:nums){
        set.insert(it);
    }
    int size=set.size();
    int count=0;
    for(int it:set){
         nums[count++]=it;
    }
 return size;

    }
};