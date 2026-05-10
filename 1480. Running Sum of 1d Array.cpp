class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i++) {
            nums[i] += nums[i - 1];
        }
        return nums; 
    }
};

// in this problem get to know about the vectors operations 
// tryed a different approach through arthematic operaters
