# Simple password checker v1.0.0

![GitHub all releases](https://img.shields.io/github/downloads/git-user-cpp/simple_password_checker/total?color=00FF00&logo=github&logoColor=00FF00&style=plastic)
![GitHub Repo stars](https://img.shields.io/github/stars/git-user-cpp/simple_password_checker?color=FFFF00&logo=github&logoColor=FFFF00&style=plastic)

![GitHub release (latest by date)](https://img.shields.io/github/v/release/git-user-cpp/simple_password_checker?color=ff0000&logo=github&logoColor=ff0000&style=plastic)
![GitHub Release Date](https://img.shields.io/github/release-date/git-user-cpp/simple_password_checker?color=ff4500&logo=github&logoColor=ff4500&style=plastic)
![GitHub](https://img.shields.io/github/license/git-user-cpp/simple_password_checker?color=FFD700&logo=github&logoColor=FFD700&style=plastic)
![GitHub language count](https://img.shields.io/github/languages/count/git-user-cpp/simple_password_checker?color=7FFFD4&logo=github&logoColor=7FFFD4&style=plastic)
![GitHub top language](https://img.shields.io/github/languages/top/git-user-cpp/simple_password_checker?color=red&logo=github&logoColor=red&style=plastic)
![GitHub code size in bytes](https://img.shields.io/github/languages/code-size/git-user-cpp/simple_password_checker?color=00BFFF&logo=github&logoColor=00BFFF&style=plastic)

![GitHub contributors](https://img.shields.io/github/contributors-anon/git-user-cpp/simple_password_checker?color=ff0000&logo=github&logoColor=ff0000&style=plastic)
![GitHub watchers](https://img.shields.io/github/watchers/git-user-cpp/simple_password_checker?color=DC143C&logo=github&logoColor=DC143C&style=plastic)
![GitHub followers](https://img.shields.io/github/followers/git-user-cpp?color=7FFF00&logo=github&logoColor=7FFF00&style=plastic)
![GitHub Sponsors](https://img.shields.io/github/sponsors/git-user-cpp?color=00FFFF&logo=github&logoColor=00FFFF&style=plastic)

![GitHub commit activity](https://img.shields.io/github/commit-activity/y/git-user-cpp/simple_password_checker?color=98FB98&logo=github&logoColor=98FB98&style=plastic)
![GitHub last commit](https://img.shields.io/github/last-commit/git-user-cpp/simple_password_checker?color=98FB98&logo=github&logoColor=98FB98&style=plastic)

---

:key: Simple password checker is implemented in C and NASM. Created to gain experience in zero runtime programming :key:

---

## ⚠️ LICENSE ⚠️
MIT License

Copyright (c) 2022 Andrew Kushyk 

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

---

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

---
