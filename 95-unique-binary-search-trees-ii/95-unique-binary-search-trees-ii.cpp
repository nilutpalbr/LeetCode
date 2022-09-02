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
     vector<TreeNode*> generateTree(int start,int end){
         if(start>end)return {NULL};
         
         vector<TreeNode*> leftBST; vector<TreeNode*> rightBST; vector<TreeNode*> resultBST;
         for(int i=start;i<=end;i++){
                leftBST=generateTree(start,i-1);
                rightBST=generateTree(i+1,end);
             for(auto leftt:leftBST ){
                 for(auto rightt: rightBST ){
                     TreeNode* root= new TreeNode(i);
                     root->left=leftt;
                     root->right=rightt;
                     resultBST.push_back(root);
                 }
             }
         }
         return  resultBST;
     }
    
    vector<TreeNode*> generateTrees(int n) {
        return generateTree(1,n);
    }
};