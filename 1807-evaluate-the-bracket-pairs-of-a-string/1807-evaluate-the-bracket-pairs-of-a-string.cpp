class Solution {
public:
    string evaluate(string s, vector<vector<string>>& k) {
        int n = k.size(), flag = 0, ind = 0;

        unordered_map<string, vector<int>> mp1;
        unordered_map<string, string> mp2;

        string s1 = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] == '(' && flag == 0) {
                ind = i + 1;
                flag = 1;
            }
            else if(isalpha(s[i]) && flag == 1) {
                s1 += s[i];
            }
            else if(s[i] == ')') {
                mp1[s1].push_back(ind);

                ind = 0;
                s1 = "";
                flag = 0;
            }
        }

        for(int i = 0; i < k.size(); i++) {
            mp2[k[i][0]] = k[i][1];
        }

        // Store all positions and keys
        vector<pair<int, string>> pos;

        for(auto &it : mp1) {
            for(int i = 0; i < it.second.size(); i++) {
                pos.push_back({it.second[i], it.first});
            }
        }

        // Right to left
        sort(pos.rbegin(), pos.rend());

        for(auto &p : pos) {
            int index = p.first;
            string key = p.second;

            string value = "?";

            if(mp2.find(key) != mp2.end()) {
                value = mp2[key];
            }

            s.replace(index, key.length(), value);
        }

        string res = "";

        for(int i = 0; i < s.length(); i++) {
            if(s[i] != '(' && s[i] != ')') {
                res += s[i];
            }
        }

        return res;
    }
};