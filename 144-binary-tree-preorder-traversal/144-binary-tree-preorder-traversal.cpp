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
    vector<int> preorderTraversal(TreeNode* root) {
        stack<TreeNode*> s;  //stack of type tree node created
        TreeNode* node= root;
        vector<int> preorder;
        //iterate to the leftmost leaf and keep pushing values of the nodes into the stack as well as the vector
        while(true){
            
            if(node!=NULL){
                preorder.push_back(node->val);
                s.push(node);
                node=node->left;
            }
            else{
                if(s.empty()==true) break;
                node=s.top();
                s.pop();
                node=node->right;
            }
        }
        return preorder;
    }
};