class Solution {
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