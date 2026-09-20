class Solution {
public:
    vector<int> shortestToChar(string s, char c) {
        int n = s.size();

        vector<int> pos;
        vector<int> ans;

        // Store positions of c
        for (int i = 0; i < n; i++) {
            if (s[i] == c)
                pos.push_back(i);
        }

        int x = 0;
        int y = 1;

        for (int i = 0; i < n; i++) {

            // Before the first occurrence
            if (i <= pos[0]) {
                ans.push_back(pos[0] - i);
            }

            // After the last occurrence
            else if (i >= pos[pos.size() - 1]) {
                ans.push_back(i - pos[pos.size() - 1]);
            }

            // Between two occurrences
            else {
                if (i > pos[y]) {
                    x++;
                    y++;
                }

                int left = i - pos[x];
                int right = pos[y] - i;

                ans.push_back(min(left, right));
            }
        }

        return ans;
    }
};