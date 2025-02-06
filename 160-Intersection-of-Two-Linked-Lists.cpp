/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if(!headA || ! headB)
            return NULL;
        
        ListNode* currA = headA;
        ListNode* currB = headB;

        int l1=0,l2=0;
        while(currA){
            l1++;
            currA = currA->next;
        }
        while(currB){
            l2++;
            currB = currB->next;
        }
        currA = headA;
        currB = headB;
        if(l1>l2){
            for (int i=0;i<l1-l2;i++){
                currA = currA->next;
            }
        }
        if(l2>l1){
            for (int i=0;i<l2-l1;i++){
                currB = currB->next;
            }
        }
        
        while(currA && currB){
            if(currA == currB){
                return currA;
            }
            else{
                currA = currA->next;
                currB = currB->next;
            }
        }
        return NULL;
    }
};