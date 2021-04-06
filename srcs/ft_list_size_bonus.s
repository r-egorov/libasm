section		.text
global		_ft_list_size

_ft_list_size:
	push		rsi

	xor			rax, rax

loop:
	cmp			rdi, 0
	je			return

	mov			rsi, [rdi + 8]
	inc			rax

	cmp			rsi, 0
	je			return

	mov			rdi, [rdi + 8]
	jmp			loop

return:
	pop			rsi
	ret
