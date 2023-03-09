/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        ListNode* fast = head;
        ListNode* slow = head;
        while(1)
        {
        if(fast == NULL || fast-> next == NULL)return NULL;
        fast = fast -> next -> next;
        slow = slow -> next;
        if(fast == slow) break;
        }
        fast = head;
        while(slow != fast)
        {
            fast = fast -> next;
            slow = slow -> next;
        }
        return  fast;
    }
};

// fast = 2 * slow
// fast = slow + n * (cycle length)
// => slow = n * (cycle length)
// assume k = a + n * (cycle length), k為所有點走到循環門口的計數
// 所以 b還需要走a步數 (a為不是cycle的list長)

  
