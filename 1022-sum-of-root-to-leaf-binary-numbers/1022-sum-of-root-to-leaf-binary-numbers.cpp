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
    void dfs(TreeNode* root,string path,vector<string>& res){
            if(root==NULL) return ;
            path += root->val+'0';
            if(root->left==NULL && root->right==NULL){
                res.push_back(path);
            }
            else{
                dfs(root->left,path,res);
                dfs(root->right,path,res);
                }

            path.pop_back();
    }
    int sumRootToLeaf(TreeNode* root) {
       vector<string> res;
       string path;
       dfs(root,path,res); 
       int sum=0;
       for(int i=0;i<res.size();i++){
           sum += stoi(res[i],nullptr,2);
           
       }
       return sum;
    }
};