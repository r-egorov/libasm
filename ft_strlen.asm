global	_ft_strlen

section 	.text
_ft_strlen:
	mov rax, -1

loop:
	inc	rax
	inc rdi
	cmp byte [rdi], 0
	jne loop

	ret
