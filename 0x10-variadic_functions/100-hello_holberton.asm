section .data
	  msgnr db "Hello, Holberton", 10
	section .text
	global main
main:
	  mov rax, 1
	  mov rdi, 1
	  mov rsi, msgnr
	  mov rdx, 17
	syscall
