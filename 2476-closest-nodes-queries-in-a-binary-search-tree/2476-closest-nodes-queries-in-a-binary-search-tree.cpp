/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
      void preorder(TreeNode* root,vector<int>&ans){
         if(root==NULL){
            return;
         }
         ans.push_back(root->val);
         preorder(root->left,ans);
         preorder(root->right,ans);
      }
    vector<vector<int>> closestNodes(TreeNode* root, vector<int>& queries) {
        vector<int>ans;
        vector<vector<int>>res;
        preorder(root,ans);
        sort(ans.begin(),ans.end());
        for(int q:queries){
            int left=-1;int right=-1;
        
         int ind=upper_bound(ans.begin(),ans.end(),q)-ans.begin()-1;
            if(ind>=0 && ans[ind]<=q){
                left=ans[ind];
            }
          ind=lower_bound(ans.begin(),ans.end(),q)-ans.begin();
            if(ind<ans.size()&&ans[ind]>=q){
                right=ans[ind];
            }
           res.push_back({left,right});
            }
        
        return res;
    }
};