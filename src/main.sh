#!/bin/bash
# Loop through folders 1, 2, and 3 and run available files.

echo "=========================================="
for folder in 1 2 3; do
    echo "Processing folder $folder"
    
    # Python: folder/folder.py
    if [ -f "$folder/$folder.py" ]; then
        echo "Running Python program in folder $folder..."
        python3 "$folder/$folder.py"
        echo "Python program in folder $folder finished."
    else
        echo "Python file not found in folder $folder. Skipping."
    fi

    # C++: folder/folder.cpp
    if [ -f "$folder/$folder.cpp" ]; then
        echo "Compiling C++ program in folder $folder..."
        g++ -std=c++11 "$folder/$folder.cpp" -o "$folder/${folder}_cpp_executable"
        echo "Running C++ program in folder $folder..."
        "./$folder/${folder}_cpp_executable"
        echo "C++ program in folder $folder finished."
    else
        echo "C++ file not found in folder $folder. Skipping."
    fi

    # Java: folder/folder.java
    if [ -f "$folder/$folder.java" ]; then
        echo "Compiling Java program in folder $folder..."
        javac "$folder/$folder.java" -d "$folder"
        echo "Running Java program in folder $folder..."
        # Assumes the main class name is the same as the folder name.
        java -cp "$folder" "$folder"
        echo "Java program in folder $folder finished."
    else
        echo "Java file not found in folder $folder. Skipping."
    fi

    # Rust: folder/folder.rs
    if [ -f "$folder/$folder.rs" ]; then
        echo "Compiling Rust program in folder $folder..."
        rustc "$folder/$folder.rs" -o "$folder/${folder}_rust_executable"
        echo "Running Rust program in folder $folder..."
        "./$folder/${folder}_rust_executable"
        echo "Rust program in folder $folder finished."
    else
        echo "Rust file not found in folder $folder. Skipping."
    fi

    echo "------------------------------------------"
done

echo "All available programs executed (or skipped) successfully."
