class Solution {
public:
    bool isValid(string s) {
        stack<char> key;
        int n =s.size();
        unordered_map<char,char> ans ;
        ans['(']=')';
        ans['{']='}';
        ans['[']=']';
        
        for(int i=0;i<n;i++){
            
            if(s[i]=='('||s[i]=='['||s[i]=='{'){
                
                key.push(s[i]);
            }
            if(s[i]==')'||s[i]==']'||s[i]=='}'){
                if(key.empty()){
                    return false;
                }
                if(ans[key.top()]!=s[i]){
                    return false;
                }
                
                if(ans[key.top()]==s[i]){
                    key.pop();
                }
            }
            
            
        }
     return key.empty();
        
    }
};