class Solution {
public:
    bool isValid(string s) {
        stack<char>s1;
       
        bool flag = false;
        for ( int i = 0; i < s.size() ; i++ ){         
               if(s[i]=='(' || s[i] =='{' || s[i]=='['){
                     s1.push(s[i]);
               }
               else{
                 if(s1.empty()){
                    return false;
                 }
                 char a = s1.top();
                 if(a == '(' && s[i] ==')'){
                     flag = true;
                 }
                 else if(a=='{' && s[i] =='}'){
                    flag = true;
                 }
                 else if(a =='[' && s[i] ==']'){
                    flag = true;
                 }
                 else{
                    return false;
                 }
                 s1.pop();
               }
        } 
               if(s1.empty()){
                return true;
               }
               else{
                return false;
               }
    }         
};
