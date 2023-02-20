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
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        int n = lists.size();
        ListNode* dummyhead = new ListNode(0);
        ListNode* temp = dummyhead;
        while(true)
        {
            ListNode* temp2 = NULL;
            int poi = -1;
            for(int i=0 ; i<n ;++i)
            {
                
                if(lists[i] == NULL) continue;
                if(temp2 == NULL || lists[i] -> val < temp2 -> val)
                {
                    temp2 = lists[i];
                    poi = i;
                }
            }
            if(poi == -1) break;
            temp->next=temp2;
            temp = temp ->next;
            lists[poi] = lists[poi] -> next;

        }
        return dummyhead -> next;
    }
};
