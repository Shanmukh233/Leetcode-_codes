/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     struct TreeNode *left;
 *     struct TreeNode *right;
 * };
 */

    bool isValidBST(struct TreeNode* root) {
        int a[10000],j=0;
        void inorder(struct TreeNode *root)
        {
            if(root){
                inorder(root->left);
                a[j++]=root->val;
                inorder(root->right);
            }
        }
        inorder(root);
        for(int i=0;i<j-1;i++)
        {
            if(a[i]>=a[i+1]) return false;
        }
        return true;
}