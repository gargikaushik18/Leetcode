

// class Solution {
// public:

//     vector<int> twoSum(vector<int>& nums, int target) {
//         unordered_map<int,int>current;
//         sort(nums.begin(),nums.end());
//         for(int i=0;i<nums.size();i++){
//             int complement=target-nums[i];
//             if(current.find(complement)!=current.end()){
//             return {current[complement],i};
//             }
//             current[nums[i]]=i;
//     }
//     return {};
// }
    
// };
class Solution {
public:
    vector<int> twoSum(std::vector<int>& nums, int target) {
        std::unordered_map<int, int> numIndexMap; // Map to store number-index pairs
        for (int i = 0; i < nums.size(); ++i) {
            int complement = target - nums[i];
            auto it = numIndexMap.find(complement);
            if (it != numIndexMap.end()) {
                return {it->second, i}; // Return original indices
            }
            numIndexMap[nums[i]] = i; // Store current number and its index
        }
        return {}; // Return empty vector if no solution is found
    }
};