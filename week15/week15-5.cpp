// week15-5.cpp 學堂計量 Binary Tree 第__題
class Solution {
public:
    int helper(TreeNode* root){
        if(root == nullptr) return INT_MAX;
        if(root->left == nullptr && root->right == nullptr) return 1;
        
        int ans1 = helper(root->left);
        int ans2 = helper(root->right);
        return min(ans1, ans2) + 1;
    }
    
    int minDepth(TreeNode* root) {
        int ans = helper(root);
        if(ans == INT_MAX) return 0;
        return ans;
    }
};
