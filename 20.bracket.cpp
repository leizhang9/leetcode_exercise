//����һ��ֻ���� '('��')'��'{'��'}'��'['��']' ���ַ��� s ���ж��ַ����Ƿ���Ч��
//
//��Ч�ַ��������㣺
//
//�����ű�������ͬ���͵������űպϡ�
//�����ű�������ȷ��˳��պϡ�
//ÿ�������Ŷ���һ����Ӧ����ͬ���͵������š�
// 
//
//ʾ�� 1��
//
//���룺s = "()"
//�����true 

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

