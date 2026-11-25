class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int carry = 1;
        int i = digits.size()-1;
        int sum = 0;

        while(i >= 0)
        {
            
            sum = digits[i] + carry;

            if(sum <= 9)
            {
                digits.at(i)=sum;
                return digits;
            }   

            else
            {
                int unit = sum % 10;
                carry = sum / 10;
                digits.at(i)=unit;
                i--; 
            } 
        } 
        
        if(digits[0]==0)
        {
            digits.push_back(1);
            swap(digits[0],digits[digits.size()-1]);
            return digits;
        }

        else
        return digits;
    }
};