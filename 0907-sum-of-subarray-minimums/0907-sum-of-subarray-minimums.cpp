class Solution {
public:
    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long mod = 1e9 + 7;
        long long ans = 0;
        
        stack<int> st;
        
        for(int i = 0; i <= n; i++) {
            // Dummy 0 at end to clear stack
            while(!st.empty() && (i == n || arr[st.top()] > arr[i])) {
                int mid = st.top();
                st.pop();
                
                int left = st.empty() ? mid + 1 : mid - st.top();
                int right = i - mid;
                
                ans = (ans + (long long)arr[mid] * left * right) % mod;
            }
            st.push(i);
        }
        
        return ans;
    }
};