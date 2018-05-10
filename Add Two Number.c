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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1 == NULL || l2 == NULL)
            return NULL;
        ListNode* temp = new ListNode(0);
        ListNode* answer = temp;
        int carry = 0;
        int value = 0;
        while(l1 != NULL && l2 !=NULL)
        {
            value = (l1->val+l2->val+carry)%10;
            carry = (l1->val+l2->val+carry)/10;
            temp->next = new ListNode(value);
            l1 = l1->next;
            l2 = l2->next;
            temp = temp->next;
            if(l1 == NULL && l2 == NULL)
                break;
            if(l1 == NULL)
                l1 = new ListNode(0);
            if(l2 == NULL)
                l2 = new ListNode(0);
        }   
        if(carry != 0)
            temp->next = new ListNode(carry);
        return answer->next;
    }
};
