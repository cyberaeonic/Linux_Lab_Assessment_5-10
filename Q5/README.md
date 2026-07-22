# Question 5

## Command 1

```bash
vim test.txt
```

Explanation:
This command opens a file in Vim for editing. Vim automatically creates a swap file while editing to help recover data after a crash.

---

## Command 2

```bash
vim -r test.txt
```

Explanation:
This command attempts to recover the contents of `test.txt` from its swap file.

---

## Command 3

```bash
vim -r
```

Explanation:
This command lists all recoverable swap files available in the current system.

---

## Command 4

```bash
ls -a
```

Explanation:
This command displays all files, including hidden files such as Vim swap files.

