//
// Created by wzvoid on 2017/4/5.
//

#include <iostream>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    // 递归实现
    int maxDepth(TreeNode *root) {
        if (root == NULL) {
            return 0;
        } else {
            int left = maxDepth(root->left);
            int right = maxDepth(root->right);
            return (left > right ? left : right) + 1;
        }
    }

    //前序遍历建立二叉树
    void createBinaryTree(TreeNode *&root) {
        int val;
        cin >> val;
        if (val == 0) {
            root = NULL;
        } else {
            root = new TreeNode(val);
            createBinaryTree(root->left);
            createBinaryTree(root->right);
        }
    }

    //前序遍历
    void print(TreeNode *root) {
        if (root != NULL) {
            cout << root->val << " ";
            print(root->left);
            print(root->right);
        }
    }
};

int main() {
    Solution s;
    TreeNode *root;
    s.createBinaryTree(root);
    s.print(root);
    cout << "\n" << s.maxDepth(root);
    return 0;
}