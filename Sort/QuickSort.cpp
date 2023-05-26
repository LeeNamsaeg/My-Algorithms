void QuickSort(int arr[], int start, int end){
	if (start >= end)
		return;
	
	int pivot = arr[(start+end)/2];
    int l = start, r = end;
    
    while (l <= r){
    	while (arr[l] < pivot) l++;
		while (arr[r] > pivot) r--;
    	
    	if (l > r)
    		break;
    	
        int tmp = arr[l];
	    arr[l] = arr[r];
    	arr[r] = tmp;

        l++;
        r--;
	}
	 
    QuickSort(arr, start, r);
    QuickSort(arr, l, end);
}
