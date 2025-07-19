# Git Helper Tool

A simple C-based command-line tool to automate common Git tasks like committing, pushing, listing branches, and more.

## Features

- ✅ Quick Commit & Push
- ✅ List Branches
- ✅ Create Branch
- ✅ Delete Branch
- ✅ Undo Last Commit

## Usage

1. **Compile the tool**  
```bash
gcc main.c branch.c git_helper.c -o git-helper
```

## Run the tool

```bash
./git-helper
```
## Follow the menu instructions
### Example:
```bash
=== Git Helper Tool ===
1. Quick Commit & Push
2. List Branches
3. Create Branch
4. Delete Branch
5. Undo Last Commit
Enter your choice:
```

## Requirements
- Git must be installed and available in your system PATH.
- Terminal with UTF-8 support recommended.
- Tested with gcc on Linux and Windows (via MinGW).

## Notes
- This tool simply wraps Git commands using system() calls.
- It is meant for educational purposes or simple automation tasks.
- Use carefully, especially when deleting branches or undoing commits.