class Solution {
public:
    bool isPalindrome(string s) {
     string copy = "";

     for(int i=0; i<s.length(); i++ )
     {
        if(s[i]>='A' && s[i]<='Z' || s[i]>='a' && s[i]<='z' || s[i]>='0' && s[i]<='9')  // checking valid char
        copy.push_back(s[i]);
     }  


     for(int i=0; i<copy.length(); i++)
     {
        if(copy[i]>='a' && copy[i]<='z' || copy[i]>='0' && copy[i]<='9') // checking and converting to lower case
        copy[i]=copy[i];

        else
        copy[i] = copy[i] - 'A' + 'a';
     }

     int start = 0;
     int end = copy.length()-1;

     while(start<=end)
     {
        if(copy[start]!=copy[end])  // checking palindrom
        return false;

        else
        start++;
        end--;
     }

     return true;
    }
};