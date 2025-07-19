#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "git_helper.h"

void git_quick_commit_push(const char* message) {
    char command[256];
    system("git add .");
    snprintf(command, sizeof(command), "git commit -m \"%s\"", message);
    system(command);
    system("git push");
    printf("Successfully committed & pushed!\n");
}

void list_branches() {
    printf("\nBranches:\n");
    system("git branch -a");
}

void create_branch(const char* branch_name) {
    char command[256];
    snprintf(command, sizeof(command), "git checkout -b %s", branch_name);
    system(command);
    printf("Created branch: %s\n", branch_name);
}

void delete_branch(const char* branch_name) {
    char command[256];
    snprintf(command, sizeof(command), "git branch -d %s", branch_name);
    system(command);
    printf("Deleted branch: %s\n", branch_name);
}

void undo_last_commit() {
    printf("\nUndoing last commit...\n");
    system("git reset --soft HEAD~1");
    printf("✅ Last commit undone! (Changes are still staged)\n");
}
