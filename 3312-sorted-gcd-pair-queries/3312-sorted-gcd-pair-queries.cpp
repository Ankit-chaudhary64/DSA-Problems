class Solution {
public:
    vector<int> gcdValues(vector<int>& nums, vector<long long>& queries) {

        int mx = *max_element(nums.begin(), nums.end());

        vector<int> freq(mx + 1, 0);

        for (int x : nums)
            freq[x]++;

        // exactPairs[g] = number of pairs whose gcd is exactly g
        vector<long long> exactPairs(mx + 1, 0);

        for (int g = mx; g >= 1; g--) {

            long long cnt = 0;

            // Count numbers divisible by g
            for (int multiple = g; multiple <= mx; multiple += g)
                cnt += freq[multiple];

            long long pairs = cnt * (cnt - 1) / 2;

            // Remove pairs already counted for larger gcds
            for (int multiple = 2 * g; multiple <= mx; multiple += g)
                pairs -= exactPairs[multiple];

            exactPairs[g] = pairs;
        }

        // Prefix count of sorted gcdPairs
        vector<long long> prefix(mx + 1, 0);

        for (int i = 1; i <= mx; i++)
            prefix[i] = prefix[i - 1] + exactPairs[i];

        vector<int> ans;

        for (long long q : queries) {

            // q is 0-based index
            int g = lower_bound(prefix.begin() + 1, prefix.end(), q + 1) - prefix.begin();

            ans.push_back(g);
        }

        return ans;
    }
};