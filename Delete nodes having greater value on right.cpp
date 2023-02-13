Node *compute(Node *head)
    {
        if(head==NULL||head->next==NULL){
            return head;
        }
        Node*curr=head;
       
        while(curr!=NULL&&curr->next!=NULL){
            if(curr->data<curr->next->data){
                curr->data=curr->next->data;
                curr->next=curr->next->next;
                curr=head;
            }
            else{
                curr=curr->next;
            }
        }
        return head;
    }
    