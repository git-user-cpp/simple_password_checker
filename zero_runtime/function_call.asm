;   MIT License
;
;   Copyright (c) 2022 m!haly4
;
;   Permission is hereby granted, free of charge, to any person obtaining a copy
;   of this software and associated documentation files (the "Software"), to deal
;   in the Software without restriction, including without limitation the rights
;   to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
;   copies of the Software, and to permit persons to whom the Software is
;   furnished to do so, subject to the following conditions:
;
;   The above copyright notice and this permission notice shall be included in all
;   copies or substantial portions of the Software.
;
;   THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
;   IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
;   FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
;   AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
;   LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
;   OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
;   SOFTWARE.

global      system_read
global      system_write
global      system_errno

section     .text

main_system_call:
                    push    ebp
                    mov     ebp, esp
                    push    ebx
                    mov     ebx, [ebp+8]
                    mov     ecx, [ebp+12]
                    mov     edx, [ebp+16]
                    int     80h
                    mov     edx, eax
                    and     edx, 0fffff000h
                    cmp     edx, 0fffff000h
                    jnz     .success
                    mov     [system_errno], eax
                    mov     eax, -1
.success:           pop     ebx
                    mov     esp, ebp
                    pop     ebp
                    ret

system_read:        mov     eax, 3
                    jmp     main_system_call

system_write:       mov     eax, 4
                    jmp     main_system_call

section     .bss

system_errno:       resd    1