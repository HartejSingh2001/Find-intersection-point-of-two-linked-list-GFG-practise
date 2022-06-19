//Function to find intersection point in Y shaped Linked Lists.
int intersectPoint(Node* head1, Node* head2)
{
    int size1=0,size2=0,diff=0;
    Node *temp1=head1,*temp2=head2;
    while(temp1!=NULL)
    {
        size1++;
        temp1=temp1->next;
    }
    while(temp2!=NULL)
    {
        size2++;
        temp2=temp2->next;
    }
    temp1=head1;
    temp2=head2;
    
    diff= size1 - size2;
    if(diff<0)
    {
        diff=diff * (-1);
    }
    
    if(size1 >= size2)
    {
        while(diff != 0)
        {
            diff--;
            temp1=temp1->next;
        }
    }
    else
    {
       while(diff != 0)
        {
            diff--;
            temp2=temp2->next;
        } 
    }
    
    while(temp1 != temp2)
    {
        temp1=temp1->next;
        temp2=temp2->next;
    }
    if(temp1 == temp2)
    {
        return temp1->data;
    }
    return -1;
}


// Time taken = 0.53/1.6
