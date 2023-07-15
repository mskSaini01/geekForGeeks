class Solution
{
    public:
    //Function to delete middle element of a stack.
    void deleteMid(stack<int>&s, int sizeOfStack)
    {
        // Using Recursion
        if(s.size() == ((sizeOfStack+1)/2)){
            s.pop();
            return ;
        }
        int x = s.top();
        s.pop();
        deleteMid(s, sizeOfStack);
        s.push(x);
        // // Using Vector
        // vector<int> v;
        // int count = ((sizeOfStack+1)/2) - 1;
        // count = sizeOfStack - count;
        // while(count--){
        //     v.push_back(s.top());
        //     s.pop();
        // }
        // for(int i = v.size()-2; i >= 0; i--) {
        //     s.push(v[i]);
        // }
    }
};