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
    bool findBST(TreeNode* root,long long mini,long long maxi){
        if(root==NULL) return true;
        if(root->val >=maxi || root->val<=mini) return false;
        return findBST(root->left,mini,root->val) && findBST(root->right,root->val,maxi);
    }
    bool isValidBST(TreeNode* root) {
        return findBST(root,LLONG_MIN, LLONG_MAX);
    }
};