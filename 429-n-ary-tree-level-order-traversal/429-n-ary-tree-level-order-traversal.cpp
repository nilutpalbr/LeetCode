/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    vector<vector<int> > levelOrder(Node* root) {
        vector<vector<int> > ans;
        if(root==NULL)return ans;
        queue<Node*> pendingNodes;
        pendingNodes.push(root);
        while(!pendingNodes.empty()){
            int size=pendingNodes.size(); vector<int> temp;
          for(int i=0;i<size;i++){
              Node* top=pendingNodes.front();
              pendingNodes.pop();
              temp.push_back(top->val);
             for(int j=0;j<top->children.size();j++){
                 pendingNodes.push(top->children[j]);
             }
          }
            ans.push_back(temp);
        }
        return ans;
    }
};