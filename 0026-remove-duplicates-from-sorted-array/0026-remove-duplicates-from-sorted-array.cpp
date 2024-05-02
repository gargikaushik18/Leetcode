class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int n=nums.size();
        int last=nums[0];
        int i=0;
        for(int j=1;j<=n-1;j++){
        if(nums[j]!=last){
            i++;
            swap(nums[j],nums[i]);
            last=nums[i];
        }
    }
    return i+1;
    }
    
};