#!/bin/bash

# Get a list of all .c files in the current directory
c_files=$(ls *.c 2>/dev/null)

if [ -z "$c_files" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile each .c file to an object file
for file in $c_files; do
    gcc -c "$file" -o "${file%.c}.o"
done

# Create the static library using ar
ar rcs liball.a *.o

# Clean up: remove the temporary object files
rm *.o

