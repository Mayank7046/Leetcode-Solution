class Solution {
public:
    bool isValid(string s) {
        stack<int>st;
      unordered_map<char,char>mp{{')','('},{']','['},{'}','{'}};

      for(char it:s){
        if(mp.count(it)){
            if(st.empty()||st.top()!=mp[it]) return false;
            st.pop();
        }
        else {
            st.push(it);
        }
      }
    return st.empty();
    }


};
 