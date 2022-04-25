#include <iostream>
#include <vector>
#include <algorithm>
#include <string>
#include <unordered_map>
#include <queue>
#include <unordered_set>

using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;

    ListNode() : val(0), next(nullptr) {}

    ListNode(int x) : val(x), next(nullptr) {}

    ListNode(int x, ListNode *next) : val(x), next(next) {}
};


class Solution {
public:
    ListNode *mergeTwoLists(ListNode *list1, ListNode *list2) {
        ListNode *head = new ListNode(0);
        ListNode *cur = head;

//        while (list1 && list2) {
//            if (list1->val <= list2->val) {
//                cur->next = list1;
//                list1 = list1->next;
//            } else {
//                cur->next = list2;
//                list2 = list2->next;
//            }
//            cur = cur->next;
//        }

// 上面的不够简洁
        while (list1 && list2){
            ListNode *&p = (list1->val <= list2->val) ? list1 : list2;
            // PS:所谓叫做 对指针的引用，为什么？
            // 对指针变量本身的修改无法作用到原指针变量，所以需要通过引用来实现修改指针变量。
            // 使用对指针的引用实践了懒惰的美德
            cur->next = p;
            cur = cur->next;
            p = p->next;
        }

        cur->next = list1 ? list1 : list2;

        return head->next;
    }
};

int main() {
    Solution s;
    ListNode *list1 = new ListNode(1);
    list1->next = new ListNode(2);
    list1->next->next = new ListNode(4);

    ListNode *list2 = new ListNode(1);
    list2->next = new ListNode(3);
    list2->next->next = new ListNode(4);

    ListNode *list = s.mergeTwoLists(list1, list2);
    while (list) {
        cout << list->val << " ";
        list = list->next;
    }
    cout << endl;
    return 0;
}


