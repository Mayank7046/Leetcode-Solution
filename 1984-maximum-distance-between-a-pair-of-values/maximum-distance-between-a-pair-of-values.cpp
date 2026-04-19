class Solution {
public:
    int maxDistance(vector<int>& nums1, vector<int>& nums2) {
        int n=nums1.size();
        int m=nums2.size();
        int a=0;
        int i=0,j=0;
        if(n<=0||m<=0)return 0;
        while(i<n&&j<m){
                if(nums1[i]<=nums2[j]){
                a=max(a,j-i);
                j++;
            }
            else{
                i++;
            }
        }
        return a;

    }
};