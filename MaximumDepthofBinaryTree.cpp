#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
};
//前序遍历建立二叉树
void createBinaryTree(TreeNode *&root) {
    int val;
    cin>>val;
    if(val==0){
        root=NULL;
    }else{
        root=(TreeNode *)malloc(sizeof(TreeNode));
        root->val=val;
        root->left=NULL;
        root->right=NULL;
        createBinaryTree(root->left);
        createBinaryTree(root->right);
    }
}
//前序遍历
void print(TreeNode *root){
    if(root!=NULL){
        cout<<root->val<<endl;
        print(root->left);
        print(root->right);
    }
}
int maxDepth(TreeNode* root) {
    if(root==NULL){
        return 0;
    }else{
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        //好吧 这里有个小失误，return的时候不要写成：
        //return (maxDepth(root->left)>maxDepth(root->right)?maxDepth(root->left):maxDepth(root->right))+1
        //否则会出现：Time Limit Exceeded，原因就不用说了，谨记！
        return (left>right?left:right) + 1;
    }
}
int main() {
    TreeNode *root;
    createBinaryTree(root);
    print(root);
    cout<<"\n"<<maxDepth(root);
    return 0;
}