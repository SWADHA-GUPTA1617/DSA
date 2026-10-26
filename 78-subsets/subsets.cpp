class Solution {
public:
    void allSubsets(vector<int>& nums,vector<int>& ans,int i,vector<vector<int>>& powerSet){
        if(i==nums.size()){
            powerSet.push_back({ans});
            return;
        }
        // inclusion step
        ans.push_back(nums[i]);
        allSubsets(nums,ans,i+1,powerSet);

        ans.pop_back();  //backtracking
        // exclusion step
        allSubsets(nums,ans,i+1,powerSet);

    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> powerSet;
        vector<int> ans;

        allSubsets(nums,ans,0,powerSet);
        return powerSet;
        
    }
};