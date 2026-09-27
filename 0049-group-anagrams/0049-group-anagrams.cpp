class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<vector<int>, vector<int>> mp;

        for(int i = 0; i < strs.size(); i++) {
            vector<int> freq(26, 0);

            for(char c : strs[i]) {
                freq[c - 'a']++;
            }

            mp[freq].push_back(i);
        }

        vector<vector<string>> ans;

        for(auto &it : mp) {
            vector<string> temp;

            for(int index : it.second) {
                temp.push_back(strs[index]);
            }

            ans.push_back(temp);
        }

        return ans;
    }
};