

Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    // Node* evenList = new Node(-1);
    // Node* even = evenList;
    // Node* oddList = new Node(-1);
    // Node* odd = oddList;
    // Node* temp = head;
    // while(temp != NULL)
    // {
    //     if(temp->data % 2 == 0)
    //     {
    //         Node* newNode = new Node(temp->data);
    //         even->next = newNode;
    //         even = even->next;
    //     }
    //    else
    //     {
    //         Node* newNode = new Node(temp->data);
    //         odd->next = newNode;
    //         odd = odd->next;
    //     }
    //     temp = temp->next;
    // }
    // even->next = oddList->next;
    // odd->next = NULL;
    // return evenList->next;
    Node*even=nullptr;

    Node*odd=nullptr;

    Node*e=nullptr; // pointer to tracked even list

    Node*o=nullptr; // pointer to track odd list

    

    

    while(head){

        if(head->data%2==0){

            if(even==nullptr){

                even=head;

                e=head;

            }

 

            else {

                e->next = head;

                e = e->next;

            }

        }

        else{

            if(odd==nullptr){

                odd=head;

                o=head;

            } else {

                o->next = head;

                o = o->next;

            }

        }

        head = head->next;

    }

    o->next=nullptr;

    e->next=odd;

    return even;

    // other method

    // Starting node of even values list.
    Node* segregateEvenOdd(Node* head)
{
    // Write your code here
    Node* evenStart = NULL; 
    // Ending node of even values list. 
    Node* evenEnd = NULL; 
    // Starting node of odd values list. 
    Node* oddStart = NULL; 
    // Ending node of odd values list. 
    Node* oddEnd = NULL; 
    // Node to traverse the list. 
    Node* currNode = head; 
  
    while (currNode != NULL) { 
        int val = currNode->data; 
  
        // If current value is even, add it to even values 
        // list. 
        if (val % 2 == 0) { 
            if (evenStart == NULL) { 
                evenStart = currNode; 
                evenEnd = evenStart; 
            } 
            else { 
                evenEnd->next = currNode; 
                evenEnd = evenEnd->next; 
            } 
        } 
  
        // If current value is odd, add it to odd values 
        // list. 
        else { 
            if (oddStart == NULL) { 
                oddStart = currNode; 
                oddEnd = oddStart; 
            } 
            else { 
                oddEnd->next = currNode; 
                oddEnd = oddEnd->next; 
            } 
        } 
  
        // Move head pointer one step in forward direction 
        currNode = currNode->next; 
    } 
  
    // If either odd list or even list is empty, no change 
    // is required as all elements are either even or odd. 
    if (oddStart == NULL || evenStart == NULL) 
        return NULL; 
  
    // Add odd list after even list. 
    evenEnd->next = oddStart; 
    oddEnd->next = NULL; 
    return evenStart;
}
