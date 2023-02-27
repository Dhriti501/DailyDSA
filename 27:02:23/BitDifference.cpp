//LEARNT
//CONVERSION OF DECIMAL NUM TO BINARY STRING 


int countBitsFlip(int a, int b){
        
        //BRUTE FORCE
        //  string m = bitset<128>(a).to_string();
        //  string n = bitset<128>(b).to_string();

        // int ans = 0;
        // for(int i=0;i<128;i++){
        //     if(m[i] != n[i])
        //         ans++;
        // }     

        //xor, AND with least sig bit, left shift until xor num =0
        int ans=0;
        int n = a^b;
        while(n>0){
            if(n&1 == 1)
                ans++;
            n = n>>1;
        }
        return ans;
        
        return ans;
        
    }