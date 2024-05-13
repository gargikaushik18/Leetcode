class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int,int>numindexmap;
        for(int i=0;i<nums.size();i++){
             auto it = numindexmap.find(nums[i]);
            if (it != numindexmap.end()) {
                if(abs(it->second-i)<=k)
                return true; 
            }
            numindexmap[nums[i]] = i; 
        }
       
            return false;
        
    }
        
};