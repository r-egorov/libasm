NAME			=	libasm.a

INCLUDES		=	./
SRCSDIR			=	srcs/
MAINDIR			=	test/

SRCS			=	ft_strlen.asm		ft_strcpy.asm \
					ft_strcmp.asm
SRCS			:=	$(addprefix $(SRCSDIR), $(SRCS))
OBJS			=	$(patsubst %.asm,%.o,$(SRCS))

CCFLAGS			=	-Wall -Wextra -Werror

%.o:				%.asm
					nasm -fmacho64 $<

.c.o:
					gcc $(CCFLAGS) -c -I$(INCLUDES) $< -o $(<:.c=.o)

include	$(wildcard $(D_FILES))

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $?

_test:				$(NAME) 
					gcc $(CCFLAGS) -L. -lasm $(MAINDIR)main.c -o $(MAINDIR)test

test:				_test
					@ $(MAINDIR)test

clean:				
					rm -f $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
