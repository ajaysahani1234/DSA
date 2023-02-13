int median(vector<vector<int>> &matrix, int r, int c){
        int a=r*c;
        int arr[a];
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                arr[c*i+j]=matrix[i][j];
            }
        }
        sort(arr,arr+a);
        int s=0;
        int e=a-1;
        int mid=(s+e)/2;
        return arr[mid];
    }