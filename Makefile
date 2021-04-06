NAME			=	libasm.a

SRCSDIR			=	srcs/

SRCS			=	ft_strlen.s			ft_strcpy.s \
					ft_strcmp.s			ft_write.s \
					ft_read.s			ft_strdup.s

SRCSBONUS		=	ft_list_push_front_bonus.s \
					ft_list_size_bonus.s

SRCS			:=	$(addprefix $(SRCSDIR), $(SRCS))

SRCSBONUS		:=	$(addprefix $(SRCSDIR), $(SRCSBONUS))
SRCSBONUS		+=	$(SRCS)

OBJS			=	$(patsubst %.s,%.o,$(SRCS))
OBJSBONUS		=	$(patsubst %.s,%.o,$(SRCSBONUS))

%.o:				%.s
					nasm -fmacho64 $<

all:				$(NAME)

$(NAME):			$(OBJS)
					ar rcs $(NAME) $?

bonus:				$(OBJSBONUS)
					ar rcs $(NAME) $?

clean:				
					rm -f $(OBJSBONUS)

fclean:				clean
					rm -f $(NAME)

re:					fclean all

.PHONY:				all clean fclean re
