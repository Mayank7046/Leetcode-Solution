
class Solution {
public:
    string getHappyString(int n, int k) {
       queue<string>q;
       q.push("a");
       q.push("b");
       q.push("c");
       vector<string>vec;
       while(!q.empty()){
        string s=q.front();
        q.pop();
        if(s.size()==n){
            vec.push_back(s);
            continue;
        }
        for(auto ch:{'a','b','c'}){
            if(s.back()!=ch){
                q.push(s+ch);
            }
        }
       }
       if(k>vec.size()){
        return "";
       }else{
        return vec[k-1];
       }
    //    return 0;
    }
};