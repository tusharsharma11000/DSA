class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        string word;
        stringstream ss(s);

        // Store every word in the stack
        while (ss >> word) {
            st.push(word);
        }

        string ans = "";

        // Pop words one by one
        while (!st.empty()) {
            ans += st.top();
            st.pop();

            if (!st.empty()) {
                ans += " ";
            }
        }

        return ans;
    }
};