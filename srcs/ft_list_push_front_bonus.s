global		_ft_list_push_front

section		.text
	extern		_malloc

_ft_list_push_front:
	push		rdx
	push		rdi
	push		rsi

	mov			rdi, 16
	call		_malloc

	pop			rsi
	pop			rdi

	mov			[rax], rsi

	mov			rdx, [rdi]
	mov			[rax + 8], rdx 

	mov			[rdi], rax

	pop			rdx
	ret
