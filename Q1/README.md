# Question 1 - Duplicate Submission Detection

## Command 1

```bash
mkdir submissions
```

Explanation:
This command creates the submissions folder where assignment files are stored.

---

## Command 2

```bash
echo "Linux Assignment" > submissions/file1.txt
```

Explanation:
This command creates the first sample assignment file.

---

## Command 3

```bash
cp submissions/file1.txt submissions/file2.txt
```

Explanation:
This command creates a duplicate copy of file1.txt for testing duplicate detection.

---

## Command 4

```bash
echo "Operating Systems" > submissions/file3.txt
```

Explanation:
This command creates another unique assignment file.

---

## Command 5

```bash
chmod +x q1.sh
```

Explanation:
This command gives execute permission to the shell script.

---

## Command 6

```bash
./q1.sh
```

Explanation:
This command executes the shell script. It identifies duplicate files, backs up unique files, generates a report, and stores any errors separately.

---

## Command 7

```bash
cat report.txt
```

Explanation:
This command displays the generated report showing processed, duplicate, and backed-up files.

---

## Command 8

```bash
cat errors.txt
```

Explanation:
This command displays any errors that occurred during execution. The file remains empty if no errors occur.

---

## Command 9

```bash
ls backup
```

Explanation:
This command lists the unique files copied into the backup directory.
