void segregateElements(int arr[],int n)
    {
        vector<int>ans;
        int i;
        for( i=0;i<n;i++){
            if(arr[i]>=0){
                ans.push_back(arr[i]);
            }
        }
            for(i=0;i<n;i++){
                if(arr[i]<0){
                    ans.push_back(arr[i]);
                }
            }
        
        for(i=0;i<n;i++){
            arr[i]=ans[i];
        }
    }