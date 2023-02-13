int matSearch (vector <vector <int>> &mat, int N, int M, int X)
	{
	    int s=0;
	    int e=(M)-1;
	    //int mid=s+(e-s)/2;
	    while(s<N&&e>=0){
	        int a=mat[s][e];
	        if(a==X){
	            return 1;
	        }
	        else if(a<X){
	            //s=mid+1;
	            s++;
	        }
	        else{
	       //     e=mid-1;
	       e--;
	        }
	        //mid=s+(e-s)/2;
	    }
	    return 0;
	}