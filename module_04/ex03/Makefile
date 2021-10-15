NAME		:= test
HDRS		:= AMateria.class.hpp \
			ICharacter.class.hpp \
			Character.class.hpp \
			Ice.class.hpp \
			Cure.class.hpp \
			IMateriaSource.class.hpp \
			MateriaSource.class.hpp

CC			:= clang++
CFLAGS		:= -Wall -Wextra -Werror -std=c++98 -g

SRCS_DIR	:= sources
HDRS_DIR	:= headers
vpath %.cpp	$(SRCS_DIR)
vpath %.hpp	$(HDRS_DIR)
INCLUDES	:= -I$(HDRS_DIR)

SRCS		:= main.cpp \
			AMateria.class.cpp \
			ICharacter.class.cpp \
			Character.class.cpp \
			Ice.class.cpp \
			Cure.class.cpp \
			IMateriaSource.class.cpp \
			MateriaSource.class.cpp

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