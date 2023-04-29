section .data
    msg db "Hello, Holberton", 10  ; Define a string with a newline character at the end

section .text
    global main     ; Declare the main function as the entry point for the program
    extern printf   ; Declare the printf function as external

main:
    push rbp        ; Save the base pointer on the stack
    mov rbp, rsp    ; Set the stack frame pointer to the current stack pointer

    lea rdi, [msg]  ; Load the address of the msg string into the rdi register as the first argument to printf
    xor eax, eax    ; Set eax to 0 (this is equivalent to mov eax, 0)
    call printf     ; Call printf with the arguments in rdi and eax

    mov eax, 0      ; Set the return value to 0 (indicating success)
    leave           ; Restore the base pointer and stack pointer
    ret             ; Return from the function

