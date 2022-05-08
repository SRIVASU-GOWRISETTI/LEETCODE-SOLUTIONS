class Solution1 {
public:
    int fib(int n) {
        int a=0;
        int b=1;
        int third=0;
        if(n==0){
            return a;
        }
        if(n==1){
            return a+b;
            
        }
    int i=2;
        while(i<=n){
             third=a+b;
            a=b;
            b=third;
            i++;
            
            
            
        }
        return third;
    }
};
class Solution2 {
public:
    int fib(int n) {
    //recursion
        if(n<=1){
            return n;
        }
        return fib(n-1)+fib(n-2);
    }
};
class Solution {
public:
    //tabulation method
    int fib(int n) {
        vector<int> dp(n+1);
        if(n<=1){
            return n;
        }
        dp[0]=0;
        dp[1]=1;
        for(int i=2;i<=n;i++){
            
            dp[i]=dp[i-1]+dp[i-2];
            
            
        }
        return dp[n];
    
    }
};