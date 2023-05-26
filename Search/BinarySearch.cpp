int BinarySearch(int arr[], int l, int r, int target){
	if (l > r)
		return -1;
	
	int mid = (l+r)/2;
	
	if (arr[mid] == target)
		return mid;
	
	else if (arr[mid] > target)
		BinarySearch(arr, l, mid-1, target);
			
	else if (arr[mid] < target)
		BinarySearch(arr, mid+1, r, target);
}

int BinarySearch(int arr[], int l, int r, int target){
	int mid;
	
	while (l <= r){
		mid = (l+r)/2;
		
		if (arr[mid] == target)
			return mid;
			
		else if (arr[mid] > target)
			r = mid-1;
			
		else if (arr[mid] < target)
			l = mid+1;
	}
	
	return -1;
}
