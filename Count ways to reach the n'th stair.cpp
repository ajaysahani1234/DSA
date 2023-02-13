if(n<0){
             return 0;
        }
        if(n==0){
            return 1;
        }
        int ans=countWays(n-1)+countWays(n-2);
        return ans%(10^9+7);
    }///tle mar rha hain;