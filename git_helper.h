#ifndef GIT_HELPER_H
#define GIT_HELPER_H

void git_quick_commit_push(const char* message);
void list_branches();
void create_branch(const char* branch_name);
void delete_branch(const char* branch_name);
void undo_last_commit();

#endif
