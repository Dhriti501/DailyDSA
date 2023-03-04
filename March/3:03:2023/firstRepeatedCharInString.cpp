char firstRep (string s)
    {
        //code here.
        for(int i=0;i<s.length();i++){
            int x = count(s.begin(),s.end(),s[i]);
            if(x>1){
                return s[i];
            }
        }
        return '#';
    }