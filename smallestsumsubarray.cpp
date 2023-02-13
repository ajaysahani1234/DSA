 int smallestSumSubarray(vector<int>& a){
       int sum=0;
      int mini=INT_MAX;
        
        for(int i=0;i<a.size();i++){
          sum=sum+a[i];
          mini=min(mini,sum);
        
          if(sum>0){
              
          
          sum=0;
          }
        }
        return mini;
  }