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
    stack<TreeNode*>small_st;
    stack<TreeNode*>large_st;
public:
    void insertLeft(TreeNode *root)
    {
        while(root)
        {
            small_st.push(root);
            root = root->left;
        }
    }
    void insertRight(TreeNode *root)
    {
        while(root)
        {
            large_st.push(root);
            root = root->right;
        }
    }
    bool findTarget(TreeNode* root, int k) {
        
        insertLeft(root); //the smallest in small_st stack
        insertRight(root);//largest in large_st stack
        
        while(large_st.size() and small_st.size())
        {
            TreeNode * large = large_st.top();
            TreeNode * small = small_st.top();
            
            if(large == small) break; //all possible cases covered
            
            int sum = large->val + small->val;
            if(sum == k)return true;
            if(sum > k)
            {
                //make the sum smaller
                large_st.pop();
                insertRight(large->left);
            }
            else
            {
                small_st.pop();
                insertLeft(small->right);
            }
        }
        
        return false;
    }
};