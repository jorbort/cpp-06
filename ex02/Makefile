NAME = generate
CFLAG = -Wall -Werror -Wextra -g -std=c++98 ##-fsanitize=address
SRC = main.cpp Base.cpp
CC = c++
OBJS = $(SRC:.cpp=.o)
HEADER = Base.hpp

%.o: %.cpp
	$(CC) -I. $(CFLAG) -c $< -o $@

$(NAME): $(OBJS) $(HEADER) Makefile
	$(CC) $(CFLAG) $(OBJS) -o $(NAME)

clean:
	rm -f *.o

git: fclean
	git add *
	git commit -m "auto commit"
	git push

fclean: clean
	rm -f $(NAME)

re: fclean $(NAME)

.PHONY: all re clean fclean
