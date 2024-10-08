#include<iostream>
#include<math.h>
#include<string>
#include<vector>
using namespace std;

int compute(string& s, int left, int right) {
	char op = '+';
	int num = 0;
	vector<int> st;
	for (int i = left; i <=right; i++) {
		if (isdigit(s[i])) {
			num = num * 10 + s[i] - '0';
		}
		if (s[i] == '{' || s[i] == '[' || s[i] == '(') {
			int layer = 0;
			int j = 1;
			while (j <= right) {
				if (s[j] == '{' || s[j] == '[' || s[j] == '(') {
					layer++;
				}  
				else if (s[j] == '}' || s[j] == ']' || s[j] == ')') {
					layer--;
					if (layer == 0)  {break;}
				}
				j++;
			}
			num = compute(s, i+1, j-1);
			i = j + 1;
		}
		
		if (!isdigit(s[i]) || i == right) {
			switch(op) {
				case '+': st.push_back(num); break;
				case '-': st.push_back(-num); break;
				case '*': st.back() *= num; break;
				case '/': st.back() /= num; break;
			}
			op = s[i];
			num = 0;
		}
	}
	int res = 0;
	for (int x : st)
		res += x;
	return res;
}
int main() {
	string s = "3+2*{1+2*[-4/(8-6)+7]}";
	s = "3+2*(3+3)";
	cout<<compute(s, 0, s.size()+1);
}

