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
    vector<int> findMode(TreeNode* root) {
        vector<int> res;
        map<int,int> arr;
        inorder(root,arr);int maxfre=0;
        for(auto&it: arr){
            maxfre=max(maxfre,it.second);
        }
        for(auto& it:arr){
            if(it.second==maxfre) res.push_back(it.first);
        }
        return res;
    }
    void inorder(TreeNode* root,map<int,int>& arr){
        if(root==NULL) return;
        inorder(root->left,arr);
        arr[root->val]++;
        inorder(root->right,arr);
    }
};