class Solution {
public:
void findcombinations(vector<int>&candidates,int target,vector<int>&current,int start,vector<vector<int>>&result){
    if(target==0){
        result.push_back(current);
        return;
    }
    for(int i=start;i<candidates.size() && candidates[i]<=target;i++){
        current.push_back(candidates[i]);
        findcombinations(candidates, target - candidates[i], current, i, result);
        current.pop_back();  
    }
}

    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<vector<int>>result;
       vector<int>current;
       sort(candidates.begin(),candidates.end());
       findcombinations(candidates,target,current,0,result);
       return result;
    }
};