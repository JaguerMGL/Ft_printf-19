SRCS_DIR = ./srcs/

SRCS = ft_printf.c\
		ft_prt_ch.c\
		ft_prt_dec.c\
		ft_prt_hex.c\
		ft_prt_str.c\
		ft_prt_uns_dec.c\
		ft_utils.c\

NAME = libftprintf.a

CC = cc

FLAGS = -Wall -Wextra -Werror

OBJ =  $(SRCS:.c=.o)

INC_DIR = ./includes/


all: $(NAME)

$(SRCS_DIR)%.o:$(SRCS_DIR)%.c
	$(CC) $(FLAGS) -I $(INC_DIR) -o $@ -c $<

$(NAME): $(OBJ)
	ar -rc $(NAME) $(OBJ)
	ranlib $(NAME)

clean:
	rm -rf $(OBJ)

fclean: clean
	rm -rf $(NAME)

re: fclean all

.PHONY:	all clean fclean re