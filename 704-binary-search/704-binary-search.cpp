class Solution {
public:
    int search(vector<int>& nums, int target) {
        int n =nums.size();
        int h=n-1,l=0;
        int ans=0;
        while(l<=h){
            
            int mid= (l+h)/2;
            if(nums[mid]==target){
                ans=mid;
                return mid;
                
            }
            else if(nums[mid]<target){
                
                l=mid+1;
                
            }
            else{
                h=mid-1;
                
                
            }
            
            
            
        }
        return -1;
    }
};