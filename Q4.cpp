#include <iostream>



struct linkNode {
    int value;
    linkNode* next;
};




void addNode(linkNode** originalNode, int val)
{
    
    linkNode* newNode = new linkNode;
    newNode->value = val;
    newNode->next =NULL;
    
    if (*originalNode== NULL)
    {
        (*originalNode) = newNode;
       
        cout << "add to an EMPTY list" <<  endl;
    }
    else {
        
        linkNode * temp = *originalNode;
        
        while(temp->next !=NULL){
            temp = temp->next;
        }
        temp ->next = newNode;
        
        cout << "add to non-empty list" <<  endl;
        
    }
}

void DeleteNode( linkNode ** Node, int val)
{
    linkNode * toDelete = NULL;
    
    if( Node == NULL || *Node == NULL) return;
    
    if ((*Node)->value == val)
    {
        toDelete = *Node;
        *Node =(*Node)->next ;
    }
    
    else {
        linkNode * temp =*Node ;
        
        while ((temp->next != NULL)&& temp->next->value!=val){
            temp = temp ->next;
            }
        
            if (temp->next!=NULL && temp->next->value ==val){
                toDelete = temp->next;
                temp->next = temp->next->next;
            }
        
      }
    if(toDelete !=NULL){
        delete toDelete;
        toDelete =NULL;
    }
    
}
