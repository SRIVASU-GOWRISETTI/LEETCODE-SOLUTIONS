class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
       
        vector<int> ultimate(n1,-1);
        unordered_map<int,int> ans;
        
        stack<int>  holder;
         for(int i=0;i<n2;i++){ 
          
            while(!holder.empty()&&nums2[i]>holder.top())
                {
                    ans[holder.top()]=nums2[i];
                    
                 holder.pop();
                }
                
                
                
            
             holder.push(nums2[i]);
            
         }
        
        for(int i=0;i<n1;i++){
            
            if(ans.find(nums1[i])!=ans.end()){
                
                ultimate[i]=ans[nums1[i]];
      
                
            }
            
        }
        return ultimate;
    }
};

