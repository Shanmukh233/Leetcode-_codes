class Solution {
public:
    bool isValid(string s) {
      int top=-1;
      char st[100000];
      for(int i=0;i<s.length();i++)
      {
        if(s[i]=='(' || s[i]=='[' ||s[i]=='{')
        {
            top++;
        st[top]=s[i];
        }
        else if(s[i]==')' ||s[i]==']' ||s[i]=='}')
        { 
            if(top==-1) return false;
            char ch = s[i];
            char open = st[top--];
            
            if((ch == ')' && open != '(') ||
                    (ch == ']' && open != '[') ||
                    (ch == '}' && open != '{'))
            {
                return false;
            }
            
        }
      }  
      

        return top==-1;
      
    }
};