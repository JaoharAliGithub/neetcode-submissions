class Solution {
   public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> diffs;
        diffs[nums[0]] = 0;
        for (int i = 1; i < nums.size(); i++) {
            if (diffs.contains(target - nums[i])) {
                std::vector<int> tp = {diffs[target - nums[i]], i};
                return tp;
            } else {
                diffs[nums[i]] = i;
            }
        }
        return {};
    }
};
