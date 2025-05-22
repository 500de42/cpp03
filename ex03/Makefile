NAME = ClapTrap
SRCS = ClapTrap.cpp main.cpp ScavTrap.cpp FragTrap.cpp DiamondTrap.cpp
FLAGS = -Wall -Werror -Wextra -Wshadow -Wno-shadow -std=c++98

all : $(NAME)

$(NAME) : $(SRCS)
	c++ $(FLAGS) $(SRCS) -o $@

clean :

fclean : clean
	rm -rf $(NAME)

re : fclean all
