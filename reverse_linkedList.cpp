// We use three pointers: prev, curr, and next.
// We reverse the link of each node one by one.
// Before reversing, we store the next node to avoid losing the remaining list.
// Finally, prev becomes the new head of the reversed list.
// Time complexity is O(n) and space complexity is O(1).
class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        
        ListNode* prev = NULL;
        ListNode* curr = head;
        
        while(curr != NULL){
            ListNode* nextNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextNode;
        }
        
        return prev;
    }
};
