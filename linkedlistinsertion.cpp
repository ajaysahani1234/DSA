public:
    //Function to insert a node at the beginning of the linked list.
    Node *insertAtBegining(Node *head, int x) {
       Node*temp=new Node(x);
       if(head==NULL){
           return temp;
       }
       temp->next=head;
       head=temp;
       return temp;
    }
    
    
    //Function to insert a node at the end of the linked list.
    Node *insertAtEnd(Node *head, int x)  {
       Node*temp=new Node(x);
       if(head==NULL){
           return temp;
       }
       Node*tail=head;
      // tail->next=temp;
      while(tail->next!=NULL){
          
      
       tail=tail->next;
      }
        tail->next=temp;
       return head;
    }