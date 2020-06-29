#include<iostream>

void invert(TreeNode* root) {
    if(root) {
        swap(root -> left, root -> right);
        invert(root -> left);
        invert(root -> right);
    }
    // return root;
    
}

TreeNode* invertTree(TreeNode* root) {
    invert(root);
    return root;
}
