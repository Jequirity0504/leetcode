class Solution {
public:
    string reverseString(string s) {
	    
	    string s1=s;
	    for(int i=0;i<s.size();i++)
    	{
	      s[i]=s1[s.size()-1-i];
    	}
	return s;
    }
};
