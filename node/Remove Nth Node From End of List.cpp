/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* dummyhead = new ListNode(0);
        dummyhead -> next = head;
        ListNode* p = dummyhead;
        ListNode* q = dummyhead;
        n++;
        while(n--) q = q->next;
        while(q)
        {
            p=p->next;
            q=q->next;
        }
        ListNode* delnode = p->next;
        p->next = delnode->next;
        delete delnode;

        ListNode* ansnode = dummyhead->next;
        delete dummyhead;

        return ansnode; 
    }
};
