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
    ListNode* deleteDuplicates(ListNode* head) 
    {
        ListNode* Current=head;

        while(Current!=NULL && Current->next!=NULL)
        {
            // if next node value is silmilar to current node
            // skip next node and update current.next

            if(Current->val==Current->next->val)
            {
                Current->next=Current->next->next;
            }
            else
            {
                Current=Current->next;
            }
        }
        return head;  
    }
};
