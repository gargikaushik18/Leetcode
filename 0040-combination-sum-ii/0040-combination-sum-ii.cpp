class Solution {
public:
void findcombinations(vector<int>&candidates,int target,vector<int>&current,int start,vector<vector<int>>&result){
    if(target==0){
        result.push_back(current);
        return;
    }
    for(int i=start;i<candidates.size() && candidates[i]<=target;i++){
         if (i > start && candidates[i] == candidates[i - 1]) // Skip duplicates
                continue;

        current.push_back(candidates[i]);
        findcombinations(candidates, target - candidates[i], current, i+1, result);
        current.pop_back();  
    }
}

    vector<vector<int>>combinationSum2(vector<int>& candidates, int target) {
       vector<vector<int>>result;
       vector<int>current;
       sort(candidates.begin(),candidates.end());
       findcombinations(candidates,target,current,0,result);
       return result;
    }
};