section .data
	msg db 'HELLO, Holberton', 10

section .text
	global _start

_start:
	;Write the message to stdout
	mov eax, 4	; Syscall number for write
	mov ebx, 1	; File descriptor 1 (stdout)
	mov ecx, msg	; Address of message
	mov edx, 16	; Lenght of message
	int 0x80	; Invoke the kernel to perform the syscall

	;Exit the program with status code 0
	mov eax, 1	; Syscall number for exit
	xor ebx, ebx	; Return status code 0
	int 0x80	; Invoke the kernel to perform the syscall
