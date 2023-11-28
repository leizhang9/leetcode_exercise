//给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

//你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。
//
//你可以按任意顺序返回答案。
//
// 
//
//示例 1：
//
//输入：nums = [2,7,11,15], target = 9
//输出：[0,1]
//解释：因为 nums[0] + nums[1] == 9 ，返回 [0, 1] 。 
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

