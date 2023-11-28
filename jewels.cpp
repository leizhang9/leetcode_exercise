//给你一个字符串 jewels 代表石头中宝石的类型，另有一个字符串 stones 代表你拥有的石头。 stones 中每个字符代表了一种你拥有的石头的类型，你想知道你拥有的石头中有多少是宝石。
//
//字母区分大小写，因此 "a" 和 "A" 是不同类型的石头。
//
//示例 1：
//
//输入：jewels = "aA", stones = "aAAbbbb"
//输出：3
//示例 2：
//
//输入：jewels = "z", stones = "ZZ"
//输出：0
// 
//
//提示：
//
//1 <= jewels.length, stones.length <= 50
//jewels 和 stones 仅由英文字母组成
//jewels 中的所有字符都是 唯一的
#include<iostream>
#include<string>
#include<unordered_set>
using namespace std;

class Solution {
    public:
    int numJewelsInStones(string jewels, string stones) {
        int len_stones = stones.length();
        int len_jewels =jewels.length();
        int count = 0;
        for (int i = 0; i < len_stones; i++) {
            for (int j = 0; j < len_jewels; j++) {
                if (stones[i]==jewels[j]) {
                    count++;
                    break; // there should be a break!!!!!!!!11
                }
            }
        }
        return count;
    }
};

//哈希集方法 
//class Solution {
//public:
//    int numJewelsInStones(string jewels, string stones) {
//        int jewelsCount = 0;
//        unordered_set<char> jewelsSet;
//        int jewelsLength = jewels.length(), stonesLength = stones.length();
//        for (int i = 0; i < jewelsLength; i++) {
//            char jewel = jewels[i];
//            jewelsSet.insert(jewel);
//        }
//        for (int i = 0; i < stonesLength; i++) {
//            char stone = stones[i];
//            if (jewelsSet.count(stone)) {
//                jewelsCount++;
//            }
//        }
//        return jewelsCount;
//    }
//};


int main() {
    Solution sol;
    cout<<sol.numJewelsInStones("aA", "aAAbbbb");
    return 0;
}

