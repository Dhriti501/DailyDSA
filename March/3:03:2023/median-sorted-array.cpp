// Sum of Middle Elements of two sorted arrays 
 
 //sorting in O(1) space
            int i=n-1;
                int j=0;
                while(i>=0 and j<n){
                    if(ar1[i]>ar2[j]){
                        swap(ar1[i],ar2[j]);
                    }
                    i--;
                    j++;
                }
                sort(ar1,ar1+n);
                sort(ar2,ar2+n);
                return ar1[n-1]+ar2[0];