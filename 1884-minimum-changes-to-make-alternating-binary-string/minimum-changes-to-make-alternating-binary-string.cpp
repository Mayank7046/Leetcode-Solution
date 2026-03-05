class Solution {
public:
    int minOperations(string s) {
        int n=s.length();
        int i, c=0,j=0;
        for( i=0;i<n;i++ , j^=1){
            if(s[i]-'0'==j) c++;
    }
        return min(c,i-c);
    }
};