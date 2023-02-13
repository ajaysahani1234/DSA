 int minNumber(int arr[], int low, int high)
    {
        sort(arr,arr+(low+high+1));
        return arr[0];
        
    }