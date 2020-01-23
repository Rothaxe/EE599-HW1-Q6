#include "solution.h"

int Solution::Factorial(int n){
	if(n < 0){
		return INT32_MIN;//return INT32_MIN to indicate the input is wrong.
	}
	if(n <= 1){
		return 1;
	}
	int result = 1;
	for(int i = 2; i <= n; i++){
		result *= i;
	}
	return result;
}

int Solution::FactorialRecursive(int n){
	if(n < 0){
		return INT32_MIN;//return INT32_MIN to indicate the input is wrong.
	}
	if(n <= 1){
		return 1;
	}
	return FactorialRecursive(n-1) * n;
}
