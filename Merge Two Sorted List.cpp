class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        
        if(list1 == nullptr){
            return list2;
        }
        if(list2 == nullptr){
            return list1;
        }
        if(list2->val < list1->val){
            std::swap(list1,list2);
        }
        ListNode* res = list1,*tmp;
        while(list1 && list2){
            while(list1!=nullptr && list1->val<=list2->val){
                tmp=list1;
                list1=list1->next;
            }
            tmp->next=list2;
            std::swap(list1,list2);
        }
        return res;
    }
};