/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    
    TreeNode* helper(vector<int> inorder,int l,int r){
        if(l>r)return NULL;
      int mid= l+ (r-l)/2;
      TreeNode* root= new TreeNode(inorder[mid]);
         root->left=helper(inorder,l,mid-1);
         root->right=helper(inorder,mid+1,r);
     return root;
    }
    
    TreeNode* sortedListToBST(ListNode* head) {
       if(head==NULL)return NULL;
        vector<int> inorder;
        while(head){
            inorder.push_back(head->val);
            head=head->next;
        }
       int size=inorder.size();
      return helper(inorder,0,size-1);
    }
};