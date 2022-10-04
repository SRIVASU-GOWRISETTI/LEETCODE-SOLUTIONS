class Solution1 {
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
class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int sum=0;
        
        for(int i=0;i<n;i++){
        sum+=nums[i];    
            
        }
        int sum_n=n*(n+1)/2;
        return sum_n-sum;
    }
};