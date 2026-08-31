class Solution {
public:
    vector<string> findWords(vector<string>& words) {
        vector<string> ans;
        string rows[3] = {"qwertyuiop", "asdfghjkl", "zxcvbnm"};

        for (string word : words) {
            string w = word;
            for (char &c : w)
                c = tolower(c);

            int row = -1;

            for (int i = 0; i < 3; i++) {
                if (rows[i].find(w[0]) != string::npos) {
                    row = i;
                    break;
                }
            }

            bool valid = true;

            for (char c : w) {
                if (rows[row].find(c) == string::npos) {
                    valid = false;
                    break;
                }
            }

            if (valid)
                ans.push_back(word);
        }

        return ans;
    }
};