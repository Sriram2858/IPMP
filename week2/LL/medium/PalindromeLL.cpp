/* one solution is to store first half od the LL in stack and compare the second half with it. careful for even and odd length.
next sol is to reverse the second half of the LL and compare since it does not takee any extre space*/

class Solution {
  public:
    // Function to check whether the list is palindrome.
    Node* reverseLL(Node* head){
        Node *prev = nullptr, *curr = head, *next;
        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }
    bool isPalindrome(Node *head) {
        // Node* t1 = head;
        // Node* t2 = head;
        // stack<int> st;
        // while(t1){
        //     if(t1->next){
        //         t1 = t1->next->next;
        //         st.push(t2->data);
        //         t2 = t2->next;
        //     }
        //     else{
        //         t1 = t1->next;
        //         t2 = t2->next;
        //     }
            
        // }
        // while(t2){
        //     if(t2->data != st.top())
        //         return false;
        //     t2 = t2->next;
        //     st.pop();
        // }
        // return true;
        if(head == NULL && head->next == NULL) return true;
        Node* fast = head;
        Node* slow = head;
        while(fast->next != NULL && fast->next->next != NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
        Node* newHead = reverseLL(slow->next);
        Node* first = head;
        Node* second = newHead;
        while(second){
            if(second->data != first->data){
                newHead = reverseLL(newHead);
                return false;
            }
            second = second->next;
            first = first->next;
        }
        newHead = reverseLL(newHead);
        return true;
    }
};
