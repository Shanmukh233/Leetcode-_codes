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
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<vector<int>> res;
        vector<int> ans;
        allpaths(root,res,ans);
        vector<string> str;
        for(int i=0;i<res.size();i++){
            string s="";
            for(int j=0;j<res[i].size()-1;j++){
                s += to_string(res[i][j])+"->";
            }
            s += to_string(res[i][res[i].size()-1]);
            str.push_back(s);
        }
        return str;
    }
    private:
      void allpaths(TreeNode* root,vector<vector<int>>& res,vector<int>& ans){
        if(root==NULL) return ;
        ans.push_back(root->val);
        if(root->left==NULL && root->right==NULL){
            res.push_back(ans);
        }
        allpaths(root->left,res,ans);
        allpaths(root->right,res,ans);
        ans.pop_back();
      }
};