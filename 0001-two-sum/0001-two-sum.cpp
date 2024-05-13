#include<vector>
class Solution {
public:
    // vector<int> twoSum(std::vector<int>& nums, int target) {
    //     std::unordered_map<int, int> numIndexMap; // Map to store number-index pairs
    //     for (int i = 0; i < nums.size(); ++i) {
    //         int complement = target - nums[i];
    //         auto it = numIndexMap.find(complement);
    //         if (it != numIndexMap.end()) {
    //             return {it->second, i}; // Return original indices
    //         }
    //         numIndexMap[nums[i]] = i; // Store current number and its index
    //     }
    //     return {}; // Return empty vector if no solution is found
    // }
    vector<int> twoSum(std::vector<int>& nums, int target) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(target==nums[i]+nums[j]){
                    arr.push_back(i);
                    arr.push_back(j);
                    return arr;
                }
            }
        }
            return arr;
        }
};