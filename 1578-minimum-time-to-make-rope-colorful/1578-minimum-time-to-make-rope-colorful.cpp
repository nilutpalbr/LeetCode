class Solution {
public:
      static int minCost(const string& colors, const vector<int>& neededTime) {
        assert(size(colors) == size(neededTime));

        int ans = 0;
        // NB. Going to r == size(colors) is intentional. We could instead have
        // more code after to loop. We could also add an extra character at the
        // end of |colors| to make sure we process the last group of ballons too.
        for (int l = 0, r = 0; r <= size(colors); ++r) {
            if (r == size(colors) || colors[r] != colors[l]) {
                // assert: The ballons [l, r) have the same color.
                const int len = r - l;
                if (len > 1) {
                    // We need to remove a ballons. Remove all, but the most expensive.
                    int sum = 0;
                    int mx = 0;
                    for ( ; l < r; ++l) {
                        sum += neededTime[l];
                        mx = max(mx, neededTime[l]);
                    }
                    ans += sum - mx;
                }
                l = r;
            }
        }
        return ans;
    }
};