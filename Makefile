NAME	= libft.a

SRCS	= ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c \
		  ft_memchr.c ft_memcmp.c ft_memccpy.c ft_strlen.c ft_isalpha.c ft_isdigit.c \
		  ft_isalnum.c ft_isascii.c ft_isprint.c ft_toupper.c ft_tolower.c \
		  ft_strchr.c ft_strrchr.c ft_strncmp.c ft_strlcpy.c ft_strlcat.c \
		  ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c \
		  ft_strjoin.c ft_strtrim.c ft_split.c ft_itoa.c ft_strmapi.c \
		  ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c

OBJS	= ${SRCS:.c=.o}

BONUS	= ft_lstlast.c ft_lstadd_front.c ft_lstsize.c \
		  ft_lstnew.c ft_lstadd_back.c ft_lstiter.c

OBJSBONUS = ${BONUS:.c=.o}

CC		= gcc

RM		= rm -f

CFLAGS	= -Wall -Wextra -Werror

INCLUDES= includes/

.c.o:
			${CC} ${CFLAGS} -I$(INCLUDES) -c $< -o $(<:.c=.o)

${NAME}: 	${OBJS}
			ar -rcs ${NAME} ${OBJS}

all :		${NAME}

bonus :		${OBJS} ${OBJSBONUS}
			ar -rcs ${NAME} ${OBJS} ${OBJSBONUS}

clean:
			${RM} ${OBJS} ${OBJSBONUS}

fclean:		clean
			${RM} ${NAME}

re:			fclean all

.PHONY:		all re clean fclean
