int Power(int a, int n){
	if (n == 0)
		return 1;
		
	else if (n % 2 == 0)
		return (Power(a*a, n/2));
		
	else if (n % 2 == 1)
		return (a * Power(a*a, (n-1)/2));
}

int Power(int a, int n, int mod){
	if (n == 0) return 1;
	if (n == 1) return a % mod;

	int half = Power(a, n / 2, mod) % mod;
	
	if(n % 2 == 0) 
	    return ((half * half) % mod); 
	else 
	    return ((((half * half) % mod) * a) % mod); 
}
