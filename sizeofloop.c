int  sizeofloop(node *h){
    int size=1;
    node  *fast,*slow,*temp;
    fast = h;
    slow = h;
    while(fast!=NULL && fast->next!=NULL){
        fast = fast->next->next;
        slow = slow->next;
        if(fast == slow){
            break;
        }
    }
    fast = h;
    while(fast!=slow){
        fast = fast->next;
        slow = slow->next;
    }
    temp = slow->next;
    while(temp!=slow){
        size++;
        temp = temp->next;
    }
    return size;
}