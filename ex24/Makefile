CFLAGS = -Wall -Wextra -Werror -I includes/

NAME = libft.a

SRC_C = ft_putchar.c \
		ft_putstr.c \
		ft_strcmp.c \
		ft_strlen.c \
		ft_swap.c 

SRC = $(addprefix srcs/, $(SRC_C))
SRC_O = $(SRC:.c=.o)

all: $(NAME)

$(NAME): $(SRC_O)
	ar rc $(NAME) $?
	ranlib $(NAME)

clean :
	rm -rf $(SRC_O)

fclean : clean
	rm -rf $(NAME)

re : fclean all
