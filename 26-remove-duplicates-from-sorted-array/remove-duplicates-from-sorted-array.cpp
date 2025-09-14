class Solution {
public:
    int removeDuplicates(vector<int>& nums) {

   set<int>st;
   for(auto it :nums){
    st.insert(it);
   }
   int size=st.size();
   int count=0;
   for(auto it:st){
    nums[count++]=it;
   }
   
   return size;
    }
};