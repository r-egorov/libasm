NAME			=	libasm.a

INCLUDES		=	./
SRCSDIR			=	srcs/
MAINDIR			=	test/

SRCS			=	ft_strlen.s			ft_strcpy.s \
					ft_strcmp.s			ft_write.s \
					ft_read.s			ft_strdup.s
SRCS			:=	$(addprefix $(SRCSDIR), $(SRCS))
OBJS			=	$(patsubst %.s,%.o,$(SRCS))

CCFLAGS			=	-Wall -Wextra -Werror

%.o:				%.s
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

test_read:			_test
					@ $(MAINDIR)test srcs/ft_strlen.s 1000

test_read_stdin:	_test
					@ $(MAINDIR)test stdin

clean:				
					rm -f $(OBJS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
