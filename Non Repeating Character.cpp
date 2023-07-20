class Solution
{
    public:
    //Function to find the first non-repeating character in a string.
    char nonrepeatingCharacter(string S)
    {
       //Your code here
        int ar[26] = {0};
        for(auto x: S)
            ar[x-'a']++;
        for(auto x: S) 
            if(ar[x-'a'] == 1)
                return x;
        return '$';
    }
};