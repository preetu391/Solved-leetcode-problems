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
  bool isSymmetric(struct TreeNode* root){
    if (!root)
        return true;
    struct TreeNode *stack[1001] = {NULL};
    int idx = 0;
    stack[idx++] = root->left;
    stack[idx++] = root->right;
    while(idx) {
        struct TreeNode *right = stack[--idx];
        struct TreeNode *left = stack[--idx];
        if (!left && !right)
            continue;
        if (!left || !right || left->val != right->val)
            return false;
        stack[idx++] = left->left;
        stack[idx++] = right->right;
        stack[idx++] = left->right;
        stack[idx++] = right->left;        
      }
    return true;
   }
};