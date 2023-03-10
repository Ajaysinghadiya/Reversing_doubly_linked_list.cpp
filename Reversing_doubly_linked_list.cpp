    Node*p=head;
    while(p)
    {
        Node*temp=p->next;
        p->next=p->prev;
        p->prev=temp;
        p=p->prev;
        if(p and p->next==nullptr)
        {
            head=p;
        }
    }
    return head;
