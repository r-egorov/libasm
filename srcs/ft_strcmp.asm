global	_ft_strcmp

section			.text
_ft_strcmp:

	push	rcx
	push	rdi
	push	rsi
	push	dx

	xor		rcx, rcx
	xor		rax, rax

loop:
	mov		dl, byte [rdi + rcx]
	cmp		dl, byte [rsi + rcx]
	jne 	return

	cmp		byte [rsi + rcx], 0
	je 		return

	cmp		byte [rdi + rcx], 0
	je 		return

	inc		rcx
	jmp 	loop
	
return:
	sub		dl, byte [rsi + rcx]
	mov		al, dl

	pop		dx
	pop		rsi
	pop		rdi
	pop		rcx

	ret
	
