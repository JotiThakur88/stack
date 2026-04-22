#include <vector>
using namespace std;

class Solution {
public:
    void dfs(Node* root, vector<int>& ans) {
        if (!root) return;

        ans.push_back(root->val); // Root

        for (auto child : root->children) {
            dfs(child, ans);      // Children
        }
    }

    vector<int> preorder(Node* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};