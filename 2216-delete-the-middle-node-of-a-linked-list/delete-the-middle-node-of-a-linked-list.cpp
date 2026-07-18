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
    ListNode* deleteMiddle(ListNode* head) {
        int count=0;
        ListNode* c=head;
        while(c!=NULL)
        {
            count++;
            c=c->next;
        }
        if(count==1) return NULL;
        else if (count == 2)
        {
            head->next=NULL;
            return head;
        }
        count=floor(count/2);
        ListNode* temp=head;
        int x=0;
        while(x+1 != count)
        {
            x++;
            temp=temp->next;
        }
        temp->next=temp->next->next;
        return head;
    }
};