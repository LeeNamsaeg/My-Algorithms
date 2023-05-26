void MergeSort(int arr[], int l, int r){	
	if (l == r) return;
	
	int mid = (l+r)/2;
	
	MergeSort(arr, l, mid);
	MergeSort(arr, mid+1, r);
	
    int tmp[r-l+1], t=0;
    
	int i = l, j = mid+1;
    
    while (i <= mid && j <= r) {
        if (arr[i] <= arr[j]){
        	tmp[t++] = arr[i++];
		}
        else{
        	tmp[t++] = arr[j++];	
		}
    }
    
    while (i <= mid)
    	tmp[t++] = arr[i++];

    while (j <= r)
    	tmp[t++] = arr[j++];	
        
    i = l; 
	t = 0;
    while (i <= r)
    	arr[i++] = tmp[t++];
}
