#include <stdio.h>
#include <string.h>
#include "git_helper.h"

int main() {
    printf("=== Git Helper Tool ===\n");
    printf("1. Quick Commit & Push\n");
    printf("2. List Branches\n");
    printf("3. Create Branch\n");
    printf("4. Delete Branch\n");
    printf("5. Undo Last Commit\n");
    printf("Enter your choice: ");

    int choice;
    scanf("%d", &choice);

    if (choice == 1) {
        char message[100];
        printf("Enter commit message: ");
        getchar();
        fgets(message, sizeof(message), stdin);
        message[strcspn(message, "\n")] = '\0';
        git_quick_commit_push(message);
    } else if (choice == 2) {
        list_branches();
    } else if (choice == 3) {
        char branch_name[50];
        printf("Enter new branch name: ");
        scanf("%s", branch_name);
        create_branch(branch_name);
    } else if (choice == 4) {
        char branch_name[50];
        printf("Enter branch to delete: ");
        scanf("%s", branch_name);
        delete_branch(branch_name);
    } else if (choice == 5) {
        undo_last_commit();
    } else {
        printf("Invalid choice.\n");
    }

    return 0;
}
