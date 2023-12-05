 #include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len = nums.size();
        int pivot;
        int left = 0;
        int right = len-1;
        while(left <= right) {
            pivot = left + (right + 1- left)/2 -1 ;
            if (pivot<left) {
                pivot = left;
            }
            
            if (nums[pivot]==target) {
                return pivot;
                break;
            }
            if (nums[pivot] > target) {
                right = pivot - 1;
            }
            else {
                left = pivot + 1;
            }

        }
        return -1;

    }
};



int main() {
    Solution sol;
    vector<int> nums={-1,0,3,5,9,12};
    
    cout<<sol.search(nums, 2)<<endl;
    cout<<sol.search(nums, 9)<<endl;
    //nums = { ... }
    //cout<<sol.search(nums, target)<<endl;
    return 0;
}

