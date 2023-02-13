  private:
    Node*floyddetectloop(Node*head){
        if(head==NULL){
            return NULL;
        }
        Node*slow=head;
        Node*fast=head;
        while(slow!=NULL&&fast!=NULL){
            fast=fast->next;
            if(fast!=NULL){
                fast=fast->next;
                
            }
            slow=slow->next;
            if(slow==fast){
                return slow;
            }
        }
        return NULL;
    }
    
    Node*getstartingnode(Node*head){
        if(head==NULL){
            return NULL;
        }
        Node*intersection=floyddetectloop(head);
        if(intersection==NULL)
        return NULL;
        Node*slow=head;
        while(slow!=intersection){
            slow=slow->next;
            intersection=intersection->next;
        }
        return slow;
    }
    public:
    //Function to remove a loop in the linked list.
    void removeLoop(Node* head)
    {
        if(head==NULL){
            return ;
        }
        Node*startofloop=getstartingnode(head);
        if(startofloop==NULL)
        return ;
        Node*temp=startofloop;
        while(temp->next!=startofloop){
            temp=temp->next;
        }
        temp->next=NULL;
        
    }