#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

class Solution {
public:
    bool isPalindrome(string s) {
        if (s.length() == 0 || s.length() == 1) {
            return true;
        }
        for (int i = 0; i < s.length(); i++) {
            if (s[i] >= 'A' && s[i] <= 'Z') {
                s[i] = s[i] + 32;
            }
            else if ((s[i] < 'a' || s[i] > 'z') && (s[i] < '0' || s[i] > '9')) {
                s.erase(s.begin() + i);
                i--;
            }
        }
        string s_1 = s;
        reverse(s.begin(), s.end());
        cout<<s<<endl;
        return s_1 == s;
    }
};

int main() {
	Solution sol;
	cout<<sol.isPalindrome("A man, a plan, a canal: Panama");
	
}
