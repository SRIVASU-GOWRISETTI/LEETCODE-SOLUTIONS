//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution{
public:
	
	void printTriangle(int n) {
	 int rows,cols;
        for(rows=1;rows<=n;rows++)
        {
            for(cols=1;cols<=n-rows+1;cols++){
                printf("* ");
                
            }
            printf("\n");
            
            
        }
	}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        
        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends