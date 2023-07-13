class Solution{
    static const int mod = 1000000007;
    
    public:
    //You need to complete this fucntion
    long long power(int N,int R)
    {
       //Your code here
        if(R==1)
            return N%mod;
        
        long long half = power(N, R/2);
        half = (half * half) % mod;
        
        if(R%2==1)
            half = (half * N) % mod;
        
        return half;
    }
};