class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> res;

        for (int x : nums) {
            for (char c : to_string(x)) {
                res.push_back(c - '0');
            }
        }

        return res;
    }
};

// used vector buildin functions
