int search(int A[], int N){
	   // int s=0;
	   // int e=N-1;
	   // int mid=s+(e-s)/2;
	   // while(s<=e){
	   //     if(A[mid]!=A[mid+1]||A[mid]!=A[mid-1]){
	   //         return A[mid];
	   //     }
	   //     else if(A[mid]==A[mid+1]){
	   //         s=mid+1;
	   //     }
	   //     else{
	   //         e=mid+1;
	   //     }
	   //     if(A[mid-1]==A[mid]){
	   //         s=mid+1;
	   //     }
	   //     else{
	   //         e=mid-1;
	   //     }
	   //     //mid=s+(e-s)/2;
	   // }
	   // return -1;
	   map<int,int>m;
	   for(int i=0;i<N;i++){
	       m[A[i]]++;
	   }
	   for(auto it:m){
	       
	   
	       if(it.second==1){
	           return it.first;
	       }
	   }
	   
	}