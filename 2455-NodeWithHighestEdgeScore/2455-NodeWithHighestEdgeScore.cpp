// Last updated: 7/2/2025, 5:42:19 PM
class Solution {
public:
    using ll = long long;
    int edgeScore(vector<int>& edges) {
        int n = edges.size();
        vector<ll> scores(n, 0);

        for(int i=0; i<n; i++) {
            scores[edges[i]] += i;
        }

        ll maxi = 0;
        int ans = 0;
        for(int i=0; i<n; i++) {
            if(scores[i] > maxi) {
                maxi = scores[i];
                ans = i;
            }
        }

        return ans;
    }
};