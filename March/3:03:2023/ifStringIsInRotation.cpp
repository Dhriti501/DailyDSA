if(s1.length() != s2.length()){
            return false;
        }else{
            string s3 = s1+s1;
            if(s3.find(s2) != string::npos){
                return 1;
            }else{
                return 0;
            }
        }