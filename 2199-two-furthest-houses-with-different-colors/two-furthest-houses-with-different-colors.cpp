class Solution {
public:
    int maxDistance(vector<int>& colors) {
     int n=colors.size();
     int ans=0;
     int maxi=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                if(colors[i]!=colors[j]){
                    maxi=abs(i-j);
                    ans=max(maxi,ans);
                }
            }
        }
        return ans;
    }
};