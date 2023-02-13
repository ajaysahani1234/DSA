 private:
    int get(Node*head){
        int len=0;
        while(head!=NULL){
            len++;
            head=head->next;
        }
        return len;
    }
    public:
    /* Should return data of middle node. If linked list is empty, then  -1*/
    int getMiddle(Node *head)
    {
        int len=get(head);
        int ans=(len/2);
        Node*temp=head;
        int cnt=0;
        while(cnt<ans){
            temp=temp->next;
            cnt++;
        }
       return temp->data;
    }