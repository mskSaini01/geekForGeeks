class Solution
{
    public:
    bool isFrequencyUnique(int n, int arr[]) {
        map<int, int> mp;
        for( int i = 0; i < n; i++) {
            mp[arr[i]]++;
        }
        
        n=0;
        unordered_set<int> st;
        
        for(auto &m : mp){
            st.insert(m.second);
            n++;
        }
        return n == st.size();
    }
};