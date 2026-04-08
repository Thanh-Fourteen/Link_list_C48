#include "insert.cpp"
#include "delete.cpp"

int main(){
	Node *head = NULL;
	insertAtTail(&head, 1);
	insertAtTail(&head, 1);
	insertAtTail(&head, 2);
	insertAtTail(&head, 1);
	insertAtTail(&head, 1);
	
	printList(head);
	
	deleteAllKeys(&head, 1);
	printList(head);
	
	freeList(&head);
}



