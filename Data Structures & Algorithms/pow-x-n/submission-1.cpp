class Solution {
private:
    double power(double x, long long n)
    {
        if(n==0)
        return 1;

        double ans= power(x,n/2);

        if(n%2==0) // n is even
       return ans*ans;

       else
       return x*ans*ans;
    }
public:
    double myPow(double x, int n) {
         long long p=n;
        double ans=power(x,abs(p));
    
        if(n>=0)
        return ans;

        else
        return 1/ans;
    }
};