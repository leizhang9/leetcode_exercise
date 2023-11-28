//给定一个只包括 '('，')'，'{'，'}'，'['，']' 的字符串 s ，判断字符串是否有效。
//
//有效字符串需满足：
//
//左括号必须用相同类型的右括号闭合。
//左括号必须以正确的顺序闭合。
//每个右括号都有一个对应的相同类型的左括号。
// 
//
//示例 1：
//
//输入：s = "()"
//输出：true 

//#include<bits/stdc++.h>
#include<iostream>
#include<stack>
#include<unordered_map>
using namespace std;

class Solution {
public:
	bool isValid(string s) {
		stack<char> stk;
		int len = s.length();
		if (len%2==1) {
			return false;
		}
		unordered_map<char,char> hashtable = {{')', '('}, 
											{'}', '{'}, 
											{']', '['}};
		for (int i = 0; i < len; i++) {
			if ((!stk.empty()) && hashtable.count(s[i]) && (stk.top()==hashtable[s[i]] ) ) {
				stk.pop();
			}
			else {
				stk.push(s[i]);
			}
			
		}
//		if (stk.empty()) {
//			return true;
//		}
//		else{
//			return false;
//		}
	return stk.empty();
	}
}; 



int main() {
    Solution sol;
//    cout<<sol.isValid("{[]}")<<endl;
    cout<<sol.isValid("{[() {}]}")<<endl;
    
    return 0;
}

