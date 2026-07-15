class Solution {
public:
    string reverseWords(string s) {

        stack<string> st;
        string word;
        stringstream ss(s);
        
        while (ss >> word) {
            st.push(word);
        }

        string ans = "";

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