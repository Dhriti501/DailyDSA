int isPalindrome(string S)
	{
	    // Your code goes here
	    int n = S.length();
	    int flag = 1;
	    for(int i=0, j=n-1;i<n/2;i++,j--){
	        if(S[i] != S[j]){
	           return 0;
	        }
	    }
	    return 1;
	    
	}