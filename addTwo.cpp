ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
    ListNode* extra = new ListNode(0);
    ListNode* curr = extra;
    int carry = 0;
    ListNode* p = l1, *q = l2;
    while(p || q) {
        int x = p? p -> val: 0;
        int y = q? q -> val: 0;
        int num = x + y + carry;
        carry = num / 10;
        curr -> next = new ListNode(num%10);
        curr = curr -> next;
        if(p)
            p = p -> next;
        if(q)
            q = q -> next;
    }
    if(carry) {
        curr -> next = new ListNode(1);
    }
    return extra -> next;
}
