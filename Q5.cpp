void PrintList(linkNode* node){
   
    stack<linkNode*> myStack;
    
    linkNode* ite = node;
    
    while (ite!=NULL){
        myStack.push(ite);
        ite = ite->next;
    }
 
    while (!myStack.empty()) {
        cout << (myStack.top())->value << endl;
        myStack.pop();
    }
}

void PrintListRecurcif(linkNode* node){

    if (node ==NULL) return;
    
    if (node->next !=NULL)
        PrintList(node->next);
    
    cout << node->value<<endl;
}

