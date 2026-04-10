#include "insert.cpp"
#include "delete.cpp"
#include "color.h"

void menu() {
	printf("%s+----------------------- Menu -----------------------+%s\n", GREEN, RESET);
	printf("%s| %-50s |%s\n", RED, "0. Exit", RESET);
	printf("%s| %-50s |%s\n", CYAN, "1. Add to the beginning of the list", RESET);
	printf("%s| %-50s |%s\n", CYAN, "2. Add to the end of the list", RESET);
	printf("%s| %-50s |%s\n", CYAN, "3. Insert an element at a position", RESET);
	printf("%s| %-50s |%s\n", CYAN, "4. Add an element after a specific element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "5. Add an element before a specific element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "6. Remove the first element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "7. Remove the last element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "8. Remove an element at a position", RESET);
	printf("%s| %-50s |%s\n", CYAN, "9. Remove a specific element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "10. Remove an element after a specific element", RESET);
	printf("%s| %-50s |%s\n", CYAN, "11. Remove an element before a specific element", RESET);
	printf("%s| %-50s |%s\n", YELLOW, "12. Print the linked list", RESET);
	printf("%s| %-50s |%s\n", YELLOW, "13. Load test cases from file", RESET);
	printf("%s+----------------------------------------------------+%s\n", GREEN, RESET);
}


int main() {
	int choice;
	Node *head = NULL;
	do {
		system("cls"); // Clear the screen
		menu();
		printf("Your choice: ");
		scanf("%d", &choice);
		int value, position, key, key_value;
		char filename[100];

		switch (choice) {
			case 1:
			case 2:
			case 3: // Insert at position
			case 4: // Add after a specific element
			case 5: // Add before a specific element
			case 6: // Delete the first element
			case 7: // Delete the last element
			case 8: // Delete at position
			case 9: // Delete all occurrences of a value
			case 10: // Delete after a specific element
			case 11: // Delete before a specific element
			case 12:
			case 13: // Load test cases from file
			default:
				break;
		}
	} while (choice != 0);

	freeList(&head);
	return 0;
}


