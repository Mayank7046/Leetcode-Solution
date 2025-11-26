class Solution {
public:
    int openLock(vector<string>& deadends, string target) {
        unordered_set<string> dead (deadends.begin(), deadends.end());
        unordered_set<string> visited;
        queue<pair<string,int>>q;
        string start="0000";
        if (dead.find(start) != dead.end())return -1;
        q.push({start,0});
        visited.insert(start);
        while(! q.empty()){
            auto [code,turn]=q.front();q.pop();
         if(code==target)
         return turn;
         for(int i=0;i<4;i++){
            string up=code;
            up[i]=(up[i]-'0'+1)%10+'0';
            string down =code;
            down [i]=(down [i]-'0'-1+10)%10+'0';
            if (visited.find(up)==visited.end() && dead.find (up)==dead.end()){
                  q.push({up, turn + 1});
                    visited.insert(up);

            }
             if (visited.find(down) == visited.end() && dead.find(down) == dead.end()) {
                    q.push({down, turn + 1});
                    visited.insert(down);
                }
         }
            
            
        }
        return -1;
    }
};