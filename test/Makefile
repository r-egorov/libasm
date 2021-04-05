NAME			=	test_all

INCLUDES		=	includes/
SRCSDIR			=	srcs/

LIBASMNAME		=	libasm.a
LIMASMDIR		=	../
LIBASM			:=	$(addprefix $(LIBASMDIR), $(LIBASMNAME))

SRCS			=	write_test.c 	read_test.c\
					strcmp_test.c	strcpy_test.c \
					strdup_test.c	strlen_test.c \
					main.c

SRCS			:=	$(addprefix $(SRCSDIR), $(SRCS))
OBJS			=	$(patsubst %.c,%.o,$(SRCS))

CCFLAGS			=	-Wall -Wextra -Werror

.c.o:
					gcc $(CCFLAGS) -c -I$(INCLUDES) $< -o $(<:.c=.o)

all:				$(NAME)

$(LIBASM):
					make -C ..

$(NAME):			$(OBJS) $(LIBASM)
					gcc $(CCFLAGS) -I$(INCLUDES) -L.. -lasm $(OBJS) -o $(NAME)

clean:				
					rm -f $(OBJS) file_to_write
					make clean -C ..

fclean:				clean
					rm -f $(NAME)
					make fclean -C ..

re:					fclean all

.PHONY:				all clean fclean re
