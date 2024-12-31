class Solution {
public:
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        // if(headA == headB) return headA;
        // ListNode *tempA = headA;
        // ListNode *tempB = headB;
        // while(tempA && tempA->next){
        //     while(tempB){
        //         if(tempA == tempB || tempA->next == tempB)
        //             return tempB;
        //         tempB = tempB->next;
        //     }
        //     tempB = headB;
        //     tempA = tempA->next->next;
        // }
        // while(tempB){
        //     if(tempA == tempB)
        //         return tempB;
        //     tempB = tempB->next;
        // }
        // return NULL;
        if(!headA || !headB) return NULL;
        ListNode *pA = headA;
        ListNode *pB = headB;
        while(pA != pB){
            if(!pA) pA = headB;
            else pA = pA->next;
            if(!pB) pB = headA;
            else pB = pB->next;
        }
        return pA;
    }
};
