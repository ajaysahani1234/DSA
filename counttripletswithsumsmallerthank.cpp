	long long countTriplets(long long arr[], int n, long long sum)
	{
	  long long  int count=0;
	  sort(arr,arr+n);
	   for(int i=0;i<n;i++){
	      //for(int j=i+1;j<n;j++){
	           
	       int j=i+1;
	       int e=n-1;
	        
	       while(j<e){
	           
	       
	       
	         long long  int k=arr[i]+arr[j]+arr[e];
	           if(k<sum){
	               count+=e-j;
	               j++;
	               
	           }
	           else if(k>=sum){
	               e--;
	           }
	           
	       
	       //}
	      }
	       
	   }
	   return count;
	}