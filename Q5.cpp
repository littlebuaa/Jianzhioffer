#include <iostream>
#include <stack>

using namespace std;

struct linkNode {
    int value;
    linkNode* next;
};



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
        PrintListRecurcif(node->next);
    
    cout << node->value<<endl;
}


int main(void){
   cout << "LINKNODE" <<endl;
    
    linkNode z= {8,NULL};
    linkNode y = {11,&z};
    linkNode x = {13,&y};
    linkNode t = {1,&x};
    
    PrintList(&t);
    
    PrintListRecurcif(&t);
    
    return 0;
   
}
