class Solution {
public:
    // Recursive function to remove target leaf nodes
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        
        if (root == nullptr) {
            return nullptr;}
        

        root->left = removeLeafNodes(root->left, target);
        root->right = removeLeafNodes(root->right, target);

        if (root->left == nullptr && root->right == nullptr && root->val == target) {
            // delete root;
            return nullptr;
        }
        return root ; 
    }

     
};
