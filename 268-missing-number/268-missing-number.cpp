class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<nums.size();i++){
            if(i!=nums[i]){
              return i;
            }
            else{
                ans=nums.size();
            }
            
            
        }
        return ans;
    }
};