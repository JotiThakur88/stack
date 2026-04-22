#include <vector>
using namespace std;

class Solution {
public:
    void dfs(Node* root, vector<int>& ans) {
        if (!root) return;

        for (auto child : root->children) {
            dfs(child, ans);     // Children first
        }

        ans.push_back(root->val); // Then root
    }

    vector<int> postorder(Node* root) {
        vector<int> ans;
        dfs(root, ans);
        return ans;
    }
};