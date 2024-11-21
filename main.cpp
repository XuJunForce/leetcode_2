class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* res = new ListNode();
        ListNode* cur = res;
        int next = 0;
        int sum = 0;
        while(l1!=NULL&&l2!=NULL){
            sum = l1->val + l2->val;
            sum+=next;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            next = sum/10;
            l1 = l1->next;
            l2 = l2->next;
        }
        while(l1!=NULL){
            sum = l1->val;
            sum+=next;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            next = sum/10;
            l1=l1->next;
        }
        while(l2!=NULL){
            sum = l2->val;
            sum+=next;
            cur->next = new ListNode(sum%10);
            cur = cur->next;
            next = sum/10;
            l2 = l2->next;
        }
        if(next>0){
            cur->next = new ListNode(next);
            cur = cur->next;
            next = sum/10; 
        }
        return res->next;
        
    }
};
