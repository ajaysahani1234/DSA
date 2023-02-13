int singleElement(int arr[] ,int N) {
        sort(arr,arr+N);
       
        for(int i=0;i<N;i++){
            
        
        if(arr[i]!=arr[i+1]&&arr[i]!=arr[i-1]){
            return arr[i];
        }
        }
        
    }