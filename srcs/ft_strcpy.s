section		.text
	global	_ft_strcpy

_ft_strcpy:
	
	push	rcx
	push	dx

	xor		rcx, rcx

loop:
	mov		dl, byte [rsi + rcx]
	mov		byte [rdi + rcx], dl
	inc		rcx

	cmp 	dl, 0
	jne 	loop

return:
	mov 	rax, rdi

	pop		dx
	pop		rcx

	ret
