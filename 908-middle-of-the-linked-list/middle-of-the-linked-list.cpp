/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* middleNode(ListNode* head) {

        ListNode *slow= head, *fast= head;

        /*USING TWO POINTERS slow and fast 
        slow ko next krke chalaya and fast ko next->next krke chalaya... jaha pr dono hi head se start krte h..
        jaha pr fast ya fast-> next nullptr milta h vaha pr loop stop hota h and slow pointer middle ko hi point kr rha hoga us point of time pr.......
        */
        while(fast!=nullptr && fast-> next!=nullptr){
            slow = slow-> next;
            fast = fast-> next -> next;
        }

        return slow;
    }
};