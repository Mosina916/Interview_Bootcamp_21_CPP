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
   void cleartree(TreeNode* root){
       if(root==NULL){
           return;
       }
        
        
        cleartree(root->left);
        cleartree(root->right);
        delete root;
        return;
        
    }
 bool solvetree(TreeNode* root){
//         base case
     if(root==NULL){
         return false;
     }
        
        
//         recursive case
        bool kyalsse1mila=solvetree(root->left);
         bool kyarsse1mila=solvetree(root->right);
        if(kyalsse1mila==false){
            //              hume memory leak se bacha rahi hai
            cleartree(root->left);
            root->left=NULL;
        }
         if(kyarsse1mila==false){
//              hume memory leak se bacha rahi hai
             cleartree(root->right);
            root->right=NULL;
        }
        if(kyalsse1mila||kyarsse1mila||root->val==1){
            return true;
            
        }
        else{
            return false;
        }
        
        
        
        
        
        
        
    }
    TreeNode* pruneTree(TreeNode* root) {
//         base case
        if(root==NULL){
            return NULL;
        }
        
        
//         recursive case
        if(solvetree(root)){
            return root;
        }
            return NULL;
        
    }
};