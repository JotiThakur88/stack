#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> ans;
        if (!root) return ans;

        stack<TreeNode*> st;
        st.push(root);

        while (!st.empty()) {
            TreeNode* curr = st.top();
            st.pop();

            // Step 1: Process root
            ans.push_back(curr->val);

            // Step 2: Push right first
            if (curr->right) st.push(curr->right);

            // Step 3: Push left
            if (curr->left) st.push(curr->left);
        }

        return ans;
    }
};