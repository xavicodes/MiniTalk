LIB = libft.a
CC = cc
SRC = ft_isalnum.c ft_isprint.c ft_memcmp.c  ft_putchar_fd.c ft_split.c \
					ft_strlcat.c ft_strncmp.c ft_substr.c ft_atoi.c ft_isalpha.c \
					ft_itoa.c ft_memcpy.c  ft_putendl_fd.c ft_strchr.c  ft_strlcpy.c \
					ft_strnstr.c ft_tolower.c ft_bzero.c   ft_isascii.c \
					ft_memmove.c ft_putnbr_fd.c  ft_strdup.c  ft_strlen.c  ft_strrchr.c \
					ft_toupper.c ft_calloc.c  ft_isdigit.c ft_memchr.c  ft_memset.c  \
					ft_putstr_fd.c  ft_strjoin.c ft_strmapi.c ft_strtrim.c ft_striteri.c

BONUS = ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c
FLAGS = -Wall -Werror -Wextra
OBJS = $(SRC:.c=.o)
BONUS_OBJS = $(BONUS:.c=.o)


all: $(LIB)

$(LIB): $(OBJS)
	ar -rcs $(LIB) $(OBJS)

%.o: %.c
	$(CC) $(FLAGS) -c $< -o $@

bonus:		$(BONUS_OBJS)
			ar -rcs $(LIB) $(BONUS_OBJS)
			touch bonus

clean:
	rm -f $(OBJS) $(BONUS_OBJS) bonus

fclean: clean
	rm -f $(LIB)

re: fclean all