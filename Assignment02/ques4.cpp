
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
          vector<vector<int> >ans;
          if(root == NULL) return ans;
          queue<TreeNode*>q;
          q.push(root);
          bool flag = true;
          while(!q.empty()){
            int size;
             size = q.size();
             vector<int>v(size);
             for ( int i =0 ; i < size ; i++){
                TreeNode* temp = q.front();
                q.pop();
                int ind;
                if(flag){
                    ind = size-1-i;
                }
                else{
                    ind = i;
                }
                if(temp->right!= NULL) q.push(temp->right);
                if(temp ->left != NULL) q.push(temp->left);
      
              
                v[ind] = temp->val;
             }
             flag = !flag;
             ans.push_back(v);
          }
       return ans;
    }
};
