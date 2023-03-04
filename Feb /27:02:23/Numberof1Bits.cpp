//LEARNT : 
//STL FOR COUNTING NO OF 1 IN BINARY FORM OF ANY NUM 
//REVERSE ITERTAING VECTOR

int setBits(int N) {
        // STL
        // return __builtin_popcount(N);
        
        
        //brute force
        vector<int> v;
        while(N>0){
            (N%2) ? (v.push_back(1)) : (v.push_back(0));
            N /= 2;
        }
        int count=0;
        for(auto it = v.rbegin(); it!=v.rend(); it++){
            if(*it==1)
                count++;
        }