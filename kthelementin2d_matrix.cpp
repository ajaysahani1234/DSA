int kthSmallest(int mat[MAX][MAX], int n, int k)
{
  int c=n*n;
  int arr[c];
  for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
           arr[n*i+j]=mat[i][j];
      }
  }
      sort(arr,arr+c);
  
      return arr[k-1];
  
}
