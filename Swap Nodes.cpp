class Solution {
public:
    ListNode* swapPairs(ListNode* head) {
        if(head==nullptr || head->next==nullptr){
            return head;
        }
        //head=head->next
        ListNode* tmp1=head;
        ListNode* tmp=head->next;
        head=head->next;
        while(tmp1!=nullptr && tmp!=nullptr){
            tmp1->next=tmp->next;
            tmp->next=tmp1;
            tmp=tmp1->next;
            if(tmp!=nullptr){
                if(tmp->next!=nullptr){
                    tmp1->next=tmp->next;
                }
            }
            tmp1=tmp;
            if(tmp1!=nullptr){
                tmp=tmp1->next;
            }
            
        }
        return head;
    }
};