class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root == NULL) return root;
        else if(root->val == val) return root;
        TreeNode* left = NULL;
        TreeNode* right = NULL;
        if(root->val > val){
          left = searchBST(root->left,val);
        }
        else{
           right = searchBST(root->right ,val);
        }
        if(left!=NULL && left->val == val){
            return left;
        }
        else if(right!=NULL && right->val == val){
            return right;
        }
        else{
            return NULL;
        }
    }
};
