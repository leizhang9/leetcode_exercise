#include<bits/stdc++.h>
using namespace std;

struct ListNode {
	int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
	ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//ÓÃµÝ¹é·½·¨ 
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if (list1 == nullptr) {
            return list2;
        }
        else if (list2 == nullptr) {
            return list1;
        }
        else if (list1->val < list2->val) {
            list1->next = mergeTwoLists(list1->next, list2);
            return list1;
        }
        else {
            list2->next = mergeTwoLists(list1, list2->next);
            return list2;
        }
    }
};


void printList(ListNode* node) {
    while (node != nullptr) {
        std::cout << node->val << " ";
        node = node->next;
    }
    std::cout << std::endl;
}

int main() {

//int array1 = [1,2,4];
//int array2 = [1,3,4];


// Creating first list: 1->2->4
ListNode* list1 = new ListNode(1);
list1->next = new ListNode(2);
list1->next->next = new ListNode(4);
cout<<"list1 is: ";
printList(list1);

// Creating second list: 1->3->4
ListNode* list2 = new ListNode(1);
list2->next = new ListNode(3);
list2->next->next = new ListNode(4);

//ListNode* list1 = [1, 2, 4];
//ListNode* list2 = [1, 3, 4];
Solution sol;

ListNode* mergedList = sol.mergeTwoLists(list1, list2);

// Print merged list
std::cout << "Merged List: ";
printList(mergedList);


} 
