class Solution {
public:
    int beautySum(string s) {

        int n = s.size();
        int ans = 0;

        // Generate all substrings
        for (int i = 0; i < n; i++) {

            int freq[26] = {0};

            // Extend the substring one character at a time
            for (int j = i; j < n; j++) {

                freq[s[j] - 'a']++;

                int maxFreq = 0;
                int minFreq = INT_MAX;

                // Find maximum and minimum frequency
                for (int k = 0; k < 26; k++) {

                    if (freq[k] > 0) {
                        maxFreq = max(maxFreq, freq[k]);
                        minFreq = min(minFreq, freq[k]);
                    }
                }

                ans += (maxFreq - minFreq);
            }
        }

        return ans;
    }
};