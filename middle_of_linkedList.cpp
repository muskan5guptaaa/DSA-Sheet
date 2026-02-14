class Solution {
public:
    ListNode* middleNode(ListNode* head) {
      //fast slow pointer apporach
       ListNode* slow=head;
       ListNode* fast=head;

       while(fast != NULL && fast->next != NULL){
        slow=slow->next;
        fast=fast->next->next;
       }
       return slow;
    };
};

// Brute force
//         int count=0;
//         ListNode* temp=head;
//         while(temp!=NULL){
//             count++;
//             temp=temp->next;
//         }
//         temp=head;
//         for(int i=0;i<count/2;i++){
//             temp=temp->next;
//         }
//         return temp;
