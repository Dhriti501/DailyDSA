// Split the binary string into substrings with equal number of 0s and 1s
 int maxSubStr(string str){
        //Write your code here
        int x=0,y=0,c=0;
        for(int i=0;i<str.length();i++){
            if(str[i] == '0')
                x++;
            else
                y++;
            
            if(x==y)
                c++;
        }
        if(x!=y)
            return -1;
        
        return c;
    }
