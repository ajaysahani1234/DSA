double MedianOfArrays(vector<int>& array1, vector<int>& array2)
    {
        vector<float>arr3;
        int i=0;
        int j=0;
        while(i<array1.size()&&j<array2.size()){
            if(array1[i]<array2[j]){
                arr3.push_back(array1[i]);
                i++;
            }
            else {
                arr3.push_back(array2[j]);
                j++;
            }
        }
        while(i<array1.size()){
            arr3.push_back(array1[i]);
            i++;
        }
        while(j<array2.size()){
            arr3.push_back(array2[j]);
            j++;
        }
        if(arr3.size()%2!=0){
            return arr3[arr3.size()/2];
        }
        else if(arr3.size()%2==0){
            //if size is even then median will be average of (m+n)/2-1 and (m+n)/2
            return (arr3[(arr3.size()/2)-1]+arr3[arr3.size()/2])/2.0;
        }
        //else{
            //return (arr3[arr3.size()/2]-1);
        //}
    
    }