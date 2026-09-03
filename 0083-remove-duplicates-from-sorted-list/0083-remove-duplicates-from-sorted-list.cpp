class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL || head->next == NULL ) return head;

        ListNode* i = head;
        ListNode* j = head->next;

        while(j!=NULL){

            while(j!=NULL && i->val == j->val){
                j = j->next;
            }
            i->next = j;
            i=j;
            
            if(j!=NULL) j = j->next;
        }

        return head;
    }
};