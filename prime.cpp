#include <iostream>
using namespace std;

int main() {
	bool isprime = 1;
	int cnt = 0;
	for (int i = 0; i <= 100; i++) {
		isprime = 1;
		for (int j = 2; j < i; j++) {
			if ((i%j)==0) {
				isprime = 0;
				break;
			}
		}
		if (isprime) {
			cout<<i<<", ";
			cnt++;
		}
	}
	cout<<"\n"<<cnt;
}
