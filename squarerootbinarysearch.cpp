long long int floorSqrt(long long int x) 
    {
      long long  int s=1;
      long long  int e=x;
      long long  int mid=s+(e-s)/2;
      long long  int ans=-1;
        while(s<=e){
          long long  int sqre=mid*mid;
            if(sqre==x){
        
                return mid;
            }
            else if(sqre<x){
                s=mid+1;
                ans=mid;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
    }