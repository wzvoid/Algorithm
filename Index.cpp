#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    explicit TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

void createBiTree1(TreeNode *&root) {
    int val;
    cin >> val;
    if (val == 0)
        root = nullptr;
    else {
        root = new TreeNode(val);
        createBiTree1(root->left);
        createBiTree1(root->right);
    }
}

TreeNode *createBiTree2() {
    int val;
    cin >> val;
    if (val == 0)
        return nullptr;
    else {
        auto *root = new TreeNode(val);
        root->left = createBiTree2();
        root->right = createBiTree2();
        return root;
    }
}

int main() {
    vector<int> v;
    for (int i = 1; i <= 20; ++i) {
        cout << &v << " " << v.size() << " " << v.capacity() << ", ";
        v.push_back(i);
        cout << &v << " " << v.size() << " " << v.capacity() << " ";
        cout << endl;
    }
    v.shrink_to_fit();
//    v.resize(10);
    cout << &v << " " << v.size() << " " << v.capacity() << " ";
    return 0;
}
