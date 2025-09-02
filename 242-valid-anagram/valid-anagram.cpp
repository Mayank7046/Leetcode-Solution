class Solution {
public:
    bool isAnagram(string s, string t) {
       vector<int>count(26,0);
       if(s.size()!=t.size())
       return false;
       for(auto c:s)
        count[c-'a']++;
       
       for(auto c:t)
       if(--count[c-'a'] <0){
       return false;
       }
       return true;
    }
};