#include <stack>
using namespace std;

class BSTIterator {
private:
    stack<TreeNode*> st;

    // Helper to push all left nodes
    void pushAllLeft(TreeNode* node) {
        while (node != NULL) {
            st.push(node);
            node = node->left;
        }
    }

public:
    BSTIterator(TreeNode* root) {
        pushAllLeft(root);
    }
    
    int next() {
        TreeNode* curr = st.top();
        st.pop();

        // If right exists, process its left subtree
        if (curr->right) {
            pushAllLeft(curr->right);
        }

        return curr->val;
    }
    
    bool hasNext() {
        return !st.empty();
    }
};