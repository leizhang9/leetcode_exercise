
#include<bits/stdc++.h>
using namespace std;


//class Solution {
//public:
//    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
//    	bool flag = 0;
//        for (int i = 0; i < n; i++) {
//            for (int j = 0; j < m+n; j++) {
//                if (nums2[i] < nums1[j]) {
//                    nums1.insert(nums1.begin()+j, nums2[i]);
//                    flag = 1;
//                    cout<<"!";
//                    break;
//                }
//                
//            }
//            if (!flag) {
//            	nums1.insert(nums1.begin()+m+i, nums2[i]);
//        	}
//        	flag=0;
////            for (int val : nums1) {
////        			std::cout << val << " ";
////    			}
////    			cout<<endl;
//        }
//        for (int i = 0; i < n; i++) {
//        	nums1.pop_back();
//		}
//    }
//};

class Solution {
public:
	void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
		for (int i = 0; i < n; i++) {
			nums1[m+i] = nums2[i];
		}
		sort(nums1.begin(), nums1.end());  //use sort function
	}
};

int main() {
	int a=0;
    Solution sol;
    vector<int> nums1={1,2,3,0,0,0};
    vector<int> nums2={2,5,6};
    sol.merge(nums1, 3, nums2, 3);
    for (int val : nums1) {
        std::cout << val << " ";
    }
    return 0;
}

