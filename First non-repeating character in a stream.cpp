class Solution {
	public:
		string FirstNonRepeating(string A){
		    // Code here
		    string res;
		    queue<char>q;
		    map<char, int>seen;
		    
		    for(char ch: A) {
		        seen[ch]++;
		        while(!q.empty() and seen[q.front()] > 1)
		            q.pop();
		        if(seen[ch] == 1)
		            q.push(ch);
		        
		        if(q.empty())
		            res.push_back('#');
		        else 
		            res.push_back(q.front());
            }
            return res;
        }
};