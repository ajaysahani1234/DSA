int remove_duplicate(int a[],int n){
        

        int j=0;
        for(int i=0;i<n;i++){
            if(a[i]!=a[j]){
                j++;
                a[j]=a[i];
                
                
                
            }
        }
           
            return j+1;
        
    }