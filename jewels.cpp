//����һ���ַ��� jewels ����ʯͷ�б�ʯ�����ͣ�����һ���ַ��� stones ������ӵ�е�ʯͷ�� stones ��ÿ���ַ�������һ����ӵ�е�ʯͷ�����ͣ�����֪����ӵ�е�ʯͷ���ж����Ǳ�ʯ��
//
//��ĸ���ִ�Сд����� "a" �� "A" �ǲ�ͬ���͵�ʯͷ��
//
//ʾ�� 1��
//
//���룺jewels = "aA", stones = "aAAbbbb"
//�����3
//ʾ�� 2��
//
//���룺jewels = "z", stones = "ZZ"
//�����0
// 
//
//��ʾ��
//
//1 <= jewels.length, stones.length <= 50
//jewels �� stones ����Ӣ����ĸ���
//jewels �е������ַ����� Ψһ��
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

//��ϣ������ 
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

