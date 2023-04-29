section .data
        msg db 'HELLO, Holberton', 10
`
section .text
        global main

main:
    ; Write the message to stdout
    mov eax, 4      ; Syscall number for write
    mov ebx, 1      ; File descriptor 1 (stdout)
    mov ecx, msg    ; Address of message
    mov edx, 17     ; Lenght of message
    int 0x80        ; Invoke the kernel to perform the syscall

    ; Return from main with status code 0
    xor eax, eax	; Return status code 0
    ret
