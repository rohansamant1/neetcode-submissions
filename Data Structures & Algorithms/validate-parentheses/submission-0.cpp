class Solution {
public:
    bool isValid(string s) {

        vector<char>stack;
        for(int i =0; i<s.length(); i++)
        {
            if(s[i]=='('||s[i]=='{'||s[i]=='[')
            stack.push_back (s[i]);

            if(s[i]==')')
            {
                if(!stack.empty()&&stack.back()=='(')
                stack.pop_back();

                else
                return false;
            }

            if(s[i]=='}')
            {
                if(!stack.empty()&&stack.back()=='{')
                stack.pop_back();

                else
                return false;
            }

            if(s[i]==']')
            {
                if(!stack.empty()&&stack.back()=='[')
                stack.pop_back();

                else
                return false;
            }
        } 

        int ans =0;
        if(stack.empty())
        ans= 1;
        return ans;     
    }
};