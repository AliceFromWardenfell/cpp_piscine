NAME		:= test
HDRS		:= Animal.class.hpp \
			Dog.class.hpp \
			Cat.class.hpp \
			WrongAnimal.class.hpp \
			WrongCat.class.hpp
			
CC			:= clang++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98

SRCS_DIR	:= sources
HDRS_DIR	:= headers
vpath %.cpp	$(SRCS_DIR)
vpath %.hpp	$(HDRS_DIR)
INCLUDES	:= -I$(HDRS_DIR)

SRCS		:= main.cpp \
			Animal.class.cpp \
			Dog.class.cpp \
			Cat.class.cpp \
			WrongAnimal.class.cpp \
			WrongCat.class.cpp
			

OBJS_DIR	:= .objects
OBJS		:= $(SRCS:%.cpp=$(OBJS_DIR)/%.o)

all:
					@echo "$(BOLD)Creating/updating '$(NAME)':$(DEF)"
					@$(MAKE) --no-print-directory $(NAME)

$(NAME):			$(OBJS)
					@echo "$(BOLD)Linking files...$(DEF)"
					@$(CC) $(OBJS) $(CFLAGS) $(INCLUDES) -o $@
					@echo "$(BOLD)'$(NAME)' has been created/updated.$(DEF)"

$(OBJS_DIR)/%.o:	%.cpp $(HDRS) | $(OBJS_DIR)
					@echo "Assembling $<..."
					@$(CC) $(CFLAGS) $(INCLUDES) -c $< -o $@

$(OBJS_DIR):
					@mkdir -p $@
					@echo "$(BOLD)Directory '$(OBJS_DIR)' has been created.$(DEF)"

clean:
					@rm -rf $(OBJS)
					@echo "$(NAME): $(BOLD)Object files have been cleaned.$(DEF)"

fclean:				clean
					@rm -rf $(NAME)
					@echo "$(BOLD)'$(NAME)' has been cleaned.$(DEF)"

re:					fclean all

.PHONY:				all clean fclean re

BOLD	:= \033[1m
DEF		:= \033[0;39m