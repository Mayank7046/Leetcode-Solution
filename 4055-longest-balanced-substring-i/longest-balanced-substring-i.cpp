class Solution {
public:
    int longestBalanced(string s) {
      int n=s.length();
      int res=0;
      for(int i=0;i<n;i++){
        vector<int>freq(26,0);
        int maxfreq=0;int unique=0;
        for(int j=i;j<n;j++){
            int c=s[j]-'a';
            freq[c]++;
            if(freq[c]==1){
                unique++;
            }
            maxfreq=max(maxfreq,freq[c]);
            if(maxfreq*unique==j-i+1){
                res=max(res,j-i+1);
            }
        }
      }
      return res;
    }
};