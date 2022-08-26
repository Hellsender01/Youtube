section .text
global main

main: 
	mov rax, 1;
	mov rdi, 1;
	mov rsi, string;
	mov rdx, 13;
	syscall;
	mov rax, 0;
	mov rdi, 0;
	mov rsi, rsp;
	sub rsi, 8;
	mov rdx, 300;
	syscall;
	ret;
	
        pop rax;
        ret;

section .data

string: db 'Enter Data - '
bin_sh: db '/bin/sh'
