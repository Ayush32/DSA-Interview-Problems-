class Solution{
  public:
    /* The below method print the required sum of polynomial
    p1 and p2 as specified in output  */
    Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        // T.C - O(N1 + N2)
        // S.C - O(N1 + N2)
        if(p1 == NULL)
            return p2;
        if(p2 == NULL){
            return p1;
        }
        Node* poly = new Node(0,0);
        Node* temp = poly;
        Node* l1 = p1;
        Node* l2 = p2;
        while(l1 != NULL && l2 != NULL){
            // if the power of first polynomial is greater than second polynomial then assign dummy next to first polynomial node;
            if(l1->pow > l2->pow){
                temp->next = l1;
                temp = temp->next;
                l1 = l1->next;
            }
            // if the power of second polynomial is greater than first polynomial then dummy next to second polynomial node
            else if(l1->pow < l2->pow) {
                temp->next = l2;
                temp = temp->next; 
                l2 = l2->next;
            }
        // if the power of first polynomial is equal to second polynomial 
        // add the both polynomial coeffcient and make new node with value(sum of coeff) and assign l1 pow t new pow
            else if(l1->pow == l2->pow) {
                Node* newNode = new Node(l1->coeff + l2->coeff,l1->pow);
                temp->next = newNode;
                temp = temp->next;
                l1 = l1->next;
                l2 = l2->next;
            }
        }
        // add remaining polynomial node if the loop is terminate;
        if(l1 != NULL){
            temp->next = l1;
        }
        if(l2 != NULL)
            temp->next = l2;
        return poly->next;
    }
};
// Time Complexity: O(m + n) where m and n are number of nodes in first and second lists respectively.

// Space Complexity: O(m+n), since we create a new linked list of size m + n to store the result of the addition of the two polynomials.

// We will maintain a prev pointer that will point to the last node of resultant linked list.
//  We will be modifying the same given nodes rather than creating new ones .
// T.C - O(m+n)
// S.C - O(1)

Node* addPolynomial(Node *p1, Node *p2)
    {
        //Your code here
        if(p1 == NULL)
            return p2;
        if(p2 == NULL)
            return p1;
        
        Node* res = new Node(0,0);
        Node* prev = res; // prev pointer keep track of last node of resultant linkedlist 
        Node* curr1 = p1;
        Node* curr2 = p2;

        
        while(curr1 != NULL && curr2 != NULL)
        {
            if(curr1->pow > curr2->pow)
            {
                prev->next = curr1;
                prev = curr1;
                curr1 = curr1->next;
                // temp = temp->next;
            }
            else if(curr1->pow < curr2->pow)
            {
                prev->next = curr2;
                prev = curr2;
                curr2 = curr2->next;
                // temp = temp->next;
            }
            else if(curr1->pow == curr2->pow)
            {
                curr1->coeff = curr1->coeff + curr2->coeff;
                prev->next = curr1;
                prev = curr1;
                // temp->next = newNode;
                curr1 = curr1->next;
                curr2 = curr2->next;
                // temp = temp->next;
            }
        }
        // if any list is lesser than other list/
        if(curr1 != NULL)
            prev->next = curr1;
        if(curr2 != NULL)
            prev->next = curr2;
    
        return res->next;