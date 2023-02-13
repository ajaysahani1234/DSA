int countBuildings(int h[], int n) {
	    int count=1;
	    int maxheight=h[0];
	    for(int i=1;i<n;i++){
	        if(maxheight<h[i]){
	            maxheight=h[i];
	            count++;
	        }
	    }
	    return count;
	}