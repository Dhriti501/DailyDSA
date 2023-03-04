class Solution{
public:
	string removeDuplicates(string str) {
	    // code here
	  unordered_map<char,int> um;
	   string k = "";
	   for(int i=0;i<str.length();i++){
	       if(um[str[i]] == 0){
	           k += str[i];
	           um[str[i]]++;
	       }
	   }

     return k;
    
	    
	}