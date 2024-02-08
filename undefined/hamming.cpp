#include <iostream>
#include <cmath>
using namespace std;

int parity(int array[], int m){
	int a = 0; // no. of 1 in data
	for (int i=0; i<m; i++){
		if (array[i] == 1){
			a++;
		}
	}
	int r = 0;
	while (!(pow(2, r) >= r+m-1)){
		r++;
	}
	return r;
}

void encode(int array[], int reversedata[], int par, int m){
	int n = m + par;
	int newdata[n];
	int q = 0;	//for power purpose
	int j = 0;
	for (int i=0; i<n; i++){
		
		if (pow(2,q) == i+1){
			q++;
			newdata[i] = 0;
			
		}
		else{
			newdata[i] = reversedata[j];
			j++;
		}
	}
	
	for (int i=0; i<n; i++){
		cout << newdata[i];
	}
}

int main(){
	int n = 4;
	int data[4] = {1,1,1,0};
	int par = parity(data, n);
	int reversedata[n];
	for (int i=n-1;i>=0;i--){
		reversedata[i] = data[n-i];
	}
	
	encode(data, reversedata, par, n);
	return 0;
}