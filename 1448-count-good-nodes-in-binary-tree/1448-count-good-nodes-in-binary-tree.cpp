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
    int count=0;
    void helper(TreeNode* root,int maxNum){
        if(root==NULL)return;
        if(root->val>=maxNum){
            count++;
        }
        helper(root->left,max(maxNum,root->val));
        helper(root->right,max(maxNum,root->val));
    }
        
        
    
    int goodNodes(TreeNode* root) {
        helper(root,INT_MIN);
        return count;
    }
};