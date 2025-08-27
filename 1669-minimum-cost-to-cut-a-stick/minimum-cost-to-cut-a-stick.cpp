class Solution {
public:
int dp[102][102] = {};
int solve(vector<int>& cuts, int left, int right) {
    if (right - left <= 1)
        return 0;
    if (!dp[left][right]) {
        dp[left][right] = INT_MAX;
        for (auto k = left + 1; k < right; ++k)
            dp[left][right] = min(dp[left][right], 
                cuts[right] - cuts[left] + solve(cuts, left, k) + solve(cuts, k, right));
    }
    return dp[left][right];
}
int minCost(int n, vector<int>& cuts) {
    cuts.push_back(0);
    cuts.push_back(n);
    sort(begin(cuts), end(cuts));
    return solve(cuts, 0, cuts.size() - 1);
}
};