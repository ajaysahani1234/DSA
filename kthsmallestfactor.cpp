int kThSmallestFactor(int N , int K) {
        int ans;
        for(int i=1;i<=N;i++){
            if(N%i==0){
                ans=i;
                K--;
            }
        
        if(K==0){
            return ans;
        }
        }
        return -1;
    }