#!/bin/bash

# Extract the filename without extension
filename=$(basename -- "$1")
filename_no_extension="${filename%.*}"

# Check for keywords in the filename and set library flags accordingly
if [[ $filename_no_extension == *"SF"* ]]; then
    LIB_FLAGS="-lsfml-graphics -lsfml-window -lsfml-system"
else
    LIB_FLAGS=""
fi

# Compile the code with the determined library flags
g++ -fdiagnostics-color=always -g "$1" -o "exec/${filename_no_extension}.out" $LIB_FLAGS

if [ -x "exec/${filename_no_extension}.out" ]; then
    echo "Compilation successful. Running executable..."
    "./exec/${filename_no_extension}.out"
else
    echo "Executable not found."
fi