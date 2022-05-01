class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        vector<int> prefix_sum(n);
        long long sum=0;
        prefix_sum[0]=arr[0];
        for(int i=1;i<n;i++){
            prefix_sum[i]=prefix_sum[i-1]+arr[i];
        }
        sum=prefix_sum[n-1];
        for(int i=2;i<n;i=i+2){
            for(int j=0;j+i<n;j++){
                if(j==0){
                sum=sum+prefix_sum[i];
                
            }
                else{
                    sum+=prefix_sum[i+j]-prefix_sum[j-1];
                    
                }
            
            
            
        }
        
    }
        
        return sum;
    }
};