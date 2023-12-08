#include<iostream>
using namespace std;

int sum_fibonaci (int n) {
	if (n ==1) {
		return 1;
	}
	int num[n];
	num[0] = 1;
	num[1] = 1;
	cout<<num[0]<<", "<<num[1]<<", ";
	int sum = 2;
	for (int i = 2; i < n; i++) {
		num[i] = num[i-1] + num[i-2];
		cout<<num[i]<<", ";
		sum += num[i];
	}
	return sum;
}
int main() {
	int n = 7;
	cout<<endl<<sum_fibonaci(n);
}
