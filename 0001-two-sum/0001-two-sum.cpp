class Solution {
public:
    std::vector<int> twoSum(std::vector<int>& nums, int target) {
        unordered_map<int, int> numIndexMap; 
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = numIndexMap.find(complement);
            if (it != numIndexMap.end()) {
                return {it->second, i}; 
            }
            numIndexMap[nums[i]] = i; 
        }
        return {};
    }
};