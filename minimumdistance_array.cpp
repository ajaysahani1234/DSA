int minDist(int a[], int n, int x, int y) {
        int c=-1;
        int b=-1;
       int min_dist=INT_MAX;
        for(int i=0;i<n;i++){
            if(a[i]==x){
                c=i;
            }
            else if(a[i]==y){
                b=i;
            }
        
            if(c!=-1&&b!=-1){
               min_dist=min(min_dist,abs(c-b)); 
            }
        }
            if(c==-1||b==-1){
                return -1;
            }
            else{
                return min_dist;
            }
        
    }