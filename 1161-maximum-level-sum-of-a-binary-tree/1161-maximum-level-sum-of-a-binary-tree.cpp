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
    int maxLevelSum(TreeNode* root) {
               vector<vector<int>> res;
       queue<TreeNode*> q;
       q.push(root);
       int maxsum=0;int j=0,k;
       while(!q.empty()){
          int size=q.size();
         int sum=0;
         j++;
          for(int i=0;i<size;i++){
             TreeNode* node=q.front();
             q.pop();
             if(node->left!=NULL) q.push(node->left);
             if(node->right!=NULL) q.push(node->right);
             sum += node->val;
          }
          if(maxsum<sum){
            maxsum=sum;
            k=j;
          }
       } 
         return k;
    }
};