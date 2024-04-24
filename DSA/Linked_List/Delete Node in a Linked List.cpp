/*
There is a singly-linked list head and we want to delete a node node in it.

You are given the node to be deleted node. You will not be given access to the first node of head.

All the values of the linked list are unique, and it is guaranteed that the given node node is not the last node in the linked list.

Delete the given node. Note that by deleting the node, we do not mean removing it from memory. We mean:*/


class Solution {
public:
    void deleteNode(ListNode* node) {
        //   4->5->1->7
        // node = 5
            // we can repalce the given node value in input with the next node value
            // then we break the connection of given node with the next node, and connect with the next of next node
        node->val = node->next->val;
        node->next = node->next->next;
    }
};