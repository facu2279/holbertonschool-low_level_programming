howglobal main
	        section .text
main:
	        mov     rax, 1
	        mov     rdi, 1
	        mov     rsi, msg
	        mov     rdx, 18
	        syscall
	        mov     rax, 60
	        mov     rdi, 0
	        syscall
	        section .data
	        msg db "Hello, Holberton\n", 10
