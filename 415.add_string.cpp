#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
//6:58 - 7:15
string addStrings(string num1, string num2) {
	int i = num1.length() - 1;
	int j = num2.length() - 1;
	int x,y;
	int add = 0;
	string ans = "";
	while(i >= 0 || j >= 0 || add >0) {
		x = i>=0? num1[i]-'0' : 0; //>=!!!!!
		y = j>=0? num2[j]-'0' : 0;
		int sum  = x + y +add;
		add = sum/10;
		ans.push_back((sum%10)+'0');
		i--;
		j--;
	}
	reverse(ans.begin(), ans.end());
	return ans;
} 

int main() {
	string num1 = "123";
	string num2 = "33311";
	cout<<addStrings(num1, num2);
	
}
