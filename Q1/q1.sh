#!/bin/bash

SOURCE_DIR="submissions"
BACKUP_DIR="backup"
REPORT_FILE="report.txt"
ERROR_FILE="errors.txt"

mkdir -p "$BACKUP_DIR"

processed=0
duplicated=0
backedup=0

declare -A hashes

for file in "$SOURCE_DIR"/*; do
    if [ -f "$file" ]; then
        ((processed++))

        hash=$(sha256sum "$file" | awk '{print $1}')

        if [[ -n "${hashes[$hash]}" ]]; then
            echo "$(basename "$file") is a duplicate of ${hashes[$hash]}" >> "$REPORT_FILE"
            ((duplicated++))
        else
            hashes[$hash]=$(basename "$file")
            cp "$file" "$BACKUP_DIR/" 2>>"$ERROR_FILE"
            ((backedup++))
        fi
    fi
done

echo "" >> "$REPORT_FILE"
echo "===== Summary =====" >> "$REPORT_FILE"
echo "Files Processed : $processed" >> "$REPORT_FILE"
echo "Duplicate Files : $duplicated" >> "$REPORT_FILE"
echo "Files Backed Up : $backedup" >> "$REPORT_FILE"

echo "Done!"
