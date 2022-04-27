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
    bool isLeftLeaf(TreeNode* node){
        return node!=NULL && node->left==NULL && node->right==NULL;
    }
    int sumOfLeftLeaves(TreeNode* root) {
        if(root==NULL){
            return 0;
        }
        queue<TreeNode*> que;
        que.push(root);
        int result=0;
        while(!que.empty()){
            int n=que.size();
            for(int i=0;i<n;i++){
                TreeNode* cur=que.front();
                que.pop();
                if(cur->left){
                    if(isLeftLeaf(cur->left)){
                        result+=cur->left->val;
                    }
                    que.push(cur->left);
                }
                if(cur->right){
                    que.push(cur->right);
                }
            }
        }
        return result;
    }
};