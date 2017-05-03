#include <iostream>
#include <vector>

using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;

    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

void create(TreeNode *&root) {
    int a;
    cin >> a;
    if (a == 0) {
        root = NULL;
    } else {
        root = new TreeNode(a);
        create(root->left);
        create(root->right);
    }
}

int main() {
    vector<int> v;
    for (int i = 1; i <= 20; ++i) {
        cout << &v << " " << v.size() << " " << v.capacity() << " ";
        v.push_back(i);
        cout << &v << " " << v.size() << " " << v.capacity() << " ";
        cout << endl;
    }
    v.shrink_to_fit();
    v.resize(10);
    cout << &v << " " << v.size() << " " << v.capacity() << " ";
    return 0;
}
