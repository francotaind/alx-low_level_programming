#!/bin/bash

# Compile all .c files in the current directory into a dynamic library

# List all .c files in the current directory
C_FILES=$(ls *.c 2>/dev/null)

# Check if there are any .c files
if [ -z "$C_FILES" ]; then
    echo "No .c files found in the current directory."
    exit 1
fi

# Compile the .c files into object files
for FILE in $C_FILES; do
    gcc -c -Wall -Werror -fpic "$FILE" -o "${FILE%.c}.o"
done

# Create the dynamic library
gcc -shared -o liball.so *.o

# Clean up: remove the object files
rm -f *.o

echo "Dynamic library liball.so created successfully."

