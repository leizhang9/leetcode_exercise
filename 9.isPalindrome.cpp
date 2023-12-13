#include<bits/stdc++.h>
using namespace std;

int main() {
	int x = 23432;
	string x_string = to_string(x);
	cout<<x_string;
    int len = x_string.length();
    //cout<<len;
    for (int i = 0; i < len/2 ; i++) {
            if (x_string[i]!=x_string[len-i-1]) {
            	cout<<x_string[i]<<endl;
            	cout<<x_string[len-i-2];
            	cout<<"false";
                return -1;
            }
    }
    cout<<"true";
    return 0;
	
}
