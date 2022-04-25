#include "iostream"
using namespace std;

// Definition for singly-linked list.
struct ListNode {
    int val;
    ListNode *next;
    ListNode() : val(0), next(nullptr) {}
    ListNode(int x) : val(x), next(nullptr) {}
    ListNode(int x, ListNode *next) : val(x), next(next) {}
};

//class Solution {
//public:
//    ListNode* removeNthFromEnd(ListNode* head, int n) {
//        ListNode *slow = head,*quick  = head;
//        while (n--){
//            quick = quick->next;
//        }
//        while(quick){
//            quick=quick->next;
//            slow=slow->next;
//        }
//        slow->next = slow->next->next;
//        return head;
//    }
//};

class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *dummy = new ListNode(0,head);
        ListNode *quick = head;
        ListNode *slow = dummy;
//        while(n--) quick=quick->next; // 会导致多走
        for(int i=0;i<n;i++) quick=quick->next;
        while (quick){
            quick = quick->next;
            slow = slow->next;
        }
        slow->next = slow->next->next;
//        return head; // 不可取巧返回head，head 不会改变，但是节点会
        ListNode *res = dummy->next;
        delete dummy;
        return res;
    }
};

int main(){
    ListNode *head = new ListNode(1);
    head->next = new ListNode(2);
    head->next->next = new ListNode(3);
    head->next->next->next = new ListNode(4);
    head->next->next->next->next = new ListNode(5);
    Solution s;
    ListNode *res = s.removeNthFromEnd(head,2);
    while(res){
        cout<<res->val<<" ";
        res = res->next;
    }
    cout<<endl;
    return 0;
}