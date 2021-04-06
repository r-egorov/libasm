section			.text
	global	_ft_strcmp

_ft_strcmp:
	push	rcx
	push	rdx

	xor		rcx, rcx
	xor		rax, rax
	xor		rdx, rdx

loop:
	mov		al, byte [rdi + rcx]
	mov		dl, byte [rsi + rcx]

	cmp		al, dl
	jne 	return

	cmp		al, 0
	je 		return

	cmp		dl, 0
	je 		return

	inc		rcx
	jmp 	loop
	
return:
	sub		rax, rdx

	pop		rdx
	pop		rcx

	ret
	
