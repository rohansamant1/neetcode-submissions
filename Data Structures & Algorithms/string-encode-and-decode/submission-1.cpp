class Solution {
public:

    string encode(vector<string>& strs) {
        string encoded;
        for(int i = 0; i<strs.size(); i++)
        {
            string temp=strs[i];
            reverse(temp.begin(),temp.end());
            encoded+=temp+"`";
        }

        return encoded;
    }

    vector<string> decode(string s) {
        vector<string>decoded;
        string temp="";

        for(int i = 0; i<s.size(); i++)
        {
            if(s[i]!='`')
            temp.push_back(s[i]);

            else if(s[i]=='`')
            { 
                reverse(temp.begin(),temp.end());
                decoded.push_back(temp);
                temp="";
            }
           
        }
        return decoded;
    }
};
