bool isPalindrome(ListNode* head) {
    if(!head) {
        return true;
    }
    
    ListNode* slow = head, *fast = head;
    while(fast) {
        slow = slow -> next;
        fast = fast -> next;
        if(fast) {
            fast = fast -> next;
        }
    }
    ListNode* it = reverse(slow);
    while(it && it -> val == head -> val) {
        it = it -> next;
        head = head -> next;
    }
    if(it) {
        return false;
    }
    return true;
    
}
ListNode* reverse(ListNode* head) {
    ListNode* p = NULL, *q = head;
    while(q) {
        ListNode* r = q -> next;
        q -> next = p;
        p = q;
        q = r;
    }
    return p;
}
