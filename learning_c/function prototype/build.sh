#!/bin/bash

# Build script for C program
gcc -o main main.c

if [ $? -eq 0 ]; then
    echo "Build successful: ./main"
else
    echo "Build failed."
fi
