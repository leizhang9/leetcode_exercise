//����һ���������� nums ��һ������Ŀ��ֵ target�������ڸ��������ҳ� ��ΪĿ��ֵ target  ���� ���� ���������������ǵ������±ꡣ

//����Լ���ÿ������ֻ���Ӧһ���𰸡����ǣ�������ͬһ��Ԫ���ڴ��ﲻ���ظ����֡�
//
//����԰�����˳�򷵻ش𰸡�
//
// 
//
//ʾ�� 1��
//
//���룺nums = [2,7,11,15], target = 9
//�����[0,1]
//���ͣ���Ϊ nums[0] + nums[1] == 9 ������ [0, 1] �� 
#include<bits/stdc++.h>
using namespace std;

//class Solution {
//public:
//    vector<int> twoSum(vector<int>& nums, int target) {
//        vector<int> result(2);
//        for (int i = 0; i < nums.size(); i++) {
//            for (int j = i+1; j < nums.size(); j++) {
//                if ((nums[i] + nums[j])==target) {
//                    result[0] = i;
//                    result[1] = j;
//                    break;
//                }
//            }
//        }
//        return result;
//    }
//};

 //use hash map
 class Solution {
public:
	vector<int> twoSum(vector<int>& nums, int target) {
		unordered_map<int,int> hashtable;
		for (int i = 0; i <= nums.size(); i++) {
			if ( hashtable.find(target-nums[i])!=hashtable.end() ) {  //find key   auto it=hashtable.find(...)
				return {(hashtable.find(target-nums[i])->second ), i}; //use ->second  to get value
			}
			hashtable[nums[i]] = i;
		}
	return { };
	}
 }; 



int main() {
    Solution sol;
    vector<int> vec={11,15,3,6};
    for (int val : sol.twoSum(vec, 9)) {
        std::cout << val << " ";
    }
//    cout<<sol.twoSum(vec, 9);
    return 0;
}

