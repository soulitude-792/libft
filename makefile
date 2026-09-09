HEADER = libft.h
NAME = libft.a
SOURCE = ft_isalpha.c \
	 ft_isdigit.c \
	 ft_isalnum.c
CC = gcc

OBJECTIVE = $(SOURCE:.c=.o)


all: $(NAME)

$(NAME): $(OBJECTIVE)
	ar rcs $(NAME) $(OBJECTIVE)


%o: %.c $(HEADER)
	$(CC) -Wall -Werror -Wextra -c $< -o $@


clean:
	rm -rf $(OBJECTIVE)


fclean: 
	make clean
	rm -rf $(NAME)


re: fclean all


.PHONY: all clean fclean re
