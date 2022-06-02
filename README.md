# Simple password checker
:key: Simple password checker is implemented in C and NASM. Created to gain experience in zero runtime programming :key:

## ⚠️ LICENSE ⚠️
MIT License

Copyright (c) 2022 m!haly4

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.

## 💻 How to use this app 💻

1) ⚠️ **The application is designed for Linux, so avoid using other systems or remake the program to avoid bugs.** ⚠️
2) 🗂️ Download *all* files and put them in a one directory.
3) ⚒️ Compile the program with *nasm* and *clang* or *gcc*, whether you like.
    - Сompilation example:
    - first command
    ```
    nasm -f elf start.asm
    
    ```
    - second command
    ```
    nasm -f elf function_call.asm
    ```
    - third command (creating a 32-bit object module *main.o*)
    ```
    clang -m32 -c main.c
    ```
4) 💥 Then, in your directory will appear files *"main.o, function_call.o, start.o"*.
    - Command for linking files and creating a program
    ```
    ld -m elf_i386 start.o function_call.o main.o -o main
    ```
5) 💥 Then, in your directory will appear file *"main"*.
    - If you want to check files in current directory
    ```
    ls -alR
    ```
    - Or
    ```
    ls -a -l -R
    ```
6) 🌠 Execute the program with command:
    ```
    ./main <password>
    ```
    - Example:
    ```
    ./main Hello
    ```
