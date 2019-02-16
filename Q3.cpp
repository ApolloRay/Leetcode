/**
*  struct ListNode {
*        int val;
*        struct ListNode *next;
*        ListNode(int x) :
*              val(x), next(NULL) {
*        }
*  };
*/
class Solution {
public:
    vector<int> printListFromTailToHead(ListNode* head) {
¡¡¡¡vector<int> list_ans;
    if(head==NULL)
    {
        return list_ans;
    }
    list_ans = printListFromTailToHead(head->next);
    list_ans.push_back(head->val);
    return list_ans;
}
};