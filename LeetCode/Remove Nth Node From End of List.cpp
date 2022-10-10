class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
         ListNode* t=head;
            int count=0;
            while(t!=NULL){
                count++;
                t=t->next;
            }
            if(n==count){
                ListNode *node=head;
                head=head->next;
                delete(node);
            }
            else{
                int N=count-n;
                int count = 1;
                ListNode* d=head;
                while(count<N){
                    d=d->next;
                    count++;
                }
                ListNode* node=d->next;
                d->next=d->next->next;
                delete(node);
            }
            return head;
            
        }
        
    
};
