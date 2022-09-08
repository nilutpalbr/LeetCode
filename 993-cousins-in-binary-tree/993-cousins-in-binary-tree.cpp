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
    bool isCousins(TreeNode* root, int x, int y) {
        queue<pair<TreeNode*,int> >nodes;
        nodes.push({root,-1});
        unordered_map<int,pair<int,int> >mapp; int depth=0;
        while(!nodes.empty()){
            int size=nodes.size();
            for(int i=0;i<size;i++){
                TreeNode* top=nodes.front().first;
                mapp[top->val].first=nodes.front().second;
                mapp[top->val].second=depth;
                nodes.pop();
                if(top->left)nodes.push({top->left,top->val});
                if(top->right)nodes.push({top->right,top->val});
            }
            depth++;
        }
      return mapp[x].first!=mapp[y].first && mapp[x].second==mapp[y].second;
    }
};