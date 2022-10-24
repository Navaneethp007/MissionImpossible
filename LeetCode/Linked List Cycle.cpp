class Solution {
public:
    bool hasCycle(ListNode *head) {
        while (head==NULL or head->next==NULL)
            return false;
        ListNode *fast = head;
        ListNode *slow = head;
        while(fast->next and fast->next->next){
        fast = fast->next->next;
        slow = slow->next;
        if  (fast==slow)
            return true;
        }
        return false;
    }
};
