class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) 
    {
        const int MAXX = 2048;

        vector<bool> dp(MAXX, false), ndp
        (MAXX);

        dp[0] = true;

        for (int t = 0; t < 3; t++) {
            fill(ndp.begin(), ndp.end(), 
            false);

            for (int x = 0; x < MAXX; x++) {
                if (!dp[x]) continue;

