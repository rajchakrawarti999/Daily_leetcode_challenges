
class Solution {
public:
    ListNode* solve(ListNode* l1, ListNode* l2, int carry){
        if(l1==NULL && l2==NULL && carry==0) return NULL;
        int sum = 0;
        sum = carry;

        if(l1!=NULL){
            sum += l1->val;
            l1  = l1->next;
        }

        if(l2!=NULL){
            sum += l2->val;
            l2 = l2->next;
        }

        ListNode* node = new ListNode(sum%10);

        node->next = solve(l1, l2, sum/10);
        return node;
    }
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        return solve(l1, l2, 0);
    }
};