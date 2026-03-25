NAME = libft.a
SRC_DIR = srcs
INC_DIR = includes
SRC = ft_putchar.c ft_swap.c ft_putstr.c ft_strlen.c ft_strcmp.c
OBJ = $(addprefix $(SRC_DIR)/, $(SRC:.c=.o))
CC = cc
CFLAGS = -Wall -Wextra -Werror -I$(INC_DIR)
 
all: $(NAME)
 
$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)
 
$(SRC_DIR)/%.o: $(SRC_DIR)/%.c $(INC_DIR)/ft.h
	$(CC) $(CFLAGS) -c $< -o $@
 
clean:
	rm -f $(OBJ)
 
fclean: clean
	rm -f $(NAME)
 
re: fclean all
 
.PHONY: all clean fclean re
