	vector<int> kLargest(int arr[], int n, int k) {
	    sort(arr,arr+n);
	    vector<int>p;
	    for(int i=n-k;i<n;i++){
	        p.push_back(arr[i]);
	    }
	    reverse(p.begin(),p.end());
	    return p;
	}
