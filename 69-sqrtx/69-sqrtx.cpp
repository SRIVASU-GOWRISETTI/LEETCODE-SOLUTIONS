class Solution {
public:
    long long mySqrt(long long x) {
long long l=1;
        long long h=x;
        long long ans=0;
        while(l<=h){
            
            long long mid = l+ (h-l)/2;
            if(mid*mid==x){
               
                return mid;
            }
            else{
                if(mid*mid<x){
                    l=mid+1;
                    ans=mid;
                    
                }
                else{
                    h=mid-1;
                }
                
                
            }
            
            
        }

            return ans;
        }
    
};