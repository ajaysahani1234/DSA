ector<int> findUnion(int arr1[], int arr2[], int n, int m)
    {
        vector<int>arr3;
        int i=0;
        int j=0;
        while(i<n&&j<m){
            if(arr1[i]<arr2[j]){
                arr3.push_back(arr1[i]);
                i++;
            }
            else {
                arr3.push_back(arr2[j]);
                j++;
            }
        }
        while(i<n){
            arr3.push_back(arr1[i]);
            i++;
        }
        while(j<m){
            arr3.push_back(arr2[j]);
            j++;
            
        }
        arr3.erase(unique(arr3.begin(),arr3.end()),arr3.end());
        return arr3;
    }