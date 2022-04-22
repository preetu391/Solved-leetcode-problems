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
    // recursive traversal
    vector<int> preorder(Node* root) {
        vector<int> ans;
        if(!root) return ans;
        pre_traverse(root, ans);
        return ans;
    }
    //recursive function 
    void pre_traverse(Node* root, vector<int> &ans){
        
        ans.emplace_back(root->val);
        
        // The loop below iterates for all the children of the tree and pushes them inside the vector in order from from left to right.
        
        for(int i=0;i<root->children.size();i++){
            pre_traverse(root->children[i], ans);
        }
    }
};