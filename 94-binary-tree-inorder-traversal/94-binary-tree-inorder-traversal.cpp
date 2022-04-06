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
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*> s; //create a stack of type tree node
        TreeNode* node = root;
        vector<int> inorder;
        //keep pushing values into the stack unitl the leftmost node is not reached
        while(true){
            if(node!=NULL){
                s.push(node);
                node=node->left;
            }
            //if the leftmost node is reached then pop the top element out of the stack when we find an element to the right of it then look for more right elements and keep popping while more right elements are encountered
            else{
                if(s.empty()==true) break;
                node=s.top();
                s.pop();
                inorder.push_back(node->val);
                node= node->right;
            }
        }
        return inorder;
    }
};