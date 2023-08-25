section .data
format db "Hello, %s",0xa,0
name db "Holberton",0

section .text
global main
extern printf

main:
sub rsp, 8               ; Align stack to 16 bytes
lea rdi, [format]        ; Load format string address into rdi
lea rsi, [name]          ; Load name string address into rsi
call printf             ; Call printf
add rsp, 8               ; Restore stack alignment

; Call exit system call
mov rax, 60             ; Syscall number for exit = 60
xor rdi, rdi            ; Exit status (0)
syscall

section .text
global exit           ; Define a label for exit
exit:
mov rax, 60             ; Syscall number for exit = 60
xor rdi, rdi            ; Exit status (0)
syscall

