class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
  
        unordered_map<int,int> ans;
        for(int i=0;i<nums.size();i++){
            
            ans[nums[i]]++;
        }
        for(auto x:ans){
            if (x.second>1){
                return true;
            }
        }
        return false;
    }
};