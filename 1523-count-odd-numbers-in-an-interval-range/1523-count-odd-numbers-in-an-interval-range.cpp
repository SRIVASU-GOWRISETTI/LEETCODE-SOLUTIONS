class Solution1 {
public:
    int countOdds(int low, int high) {// o(n) time complexity
        int count=0;
        for(int i=low;i<=high;i++){
            
            if(i%2!=0){
                count++;
                
            }
            
            
        }
        return count;
        
    }
};


class Solution {
public:
    int countOdds(int low, int high) {// o(n) time complexity
         int x= (high-low)/2;
        
        if(low%2!=0||high%2!=0){
            x++;
            
        }
        return x;
        
    }
};