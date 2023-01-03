# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: tstrassb <tstrassb@student.42wolfsburg.    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/12/28 08:48:39 by tstrassb          #+#    #+#              #
#    Updated: 2023/01/02 08:47:47 by tstrassb         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libftprintf.a

SRC		=	ft_put_needed.c ft_printf_needed.c ft_convers_needed.c\
			ft_printf.c ft_choose_convers.c ft_convers_selection.c

OBJ		=	${SRC:%.c=%.o}

CC		=	cc

RM		=	rm -f

CFLAGS	=	-Wall -Wextra -Werror

RED		=	\033[1;31m
GREEN	=	\033[1;32m
YELLOW	=	\033[1;33m
BLUE	=	\033[1;34m
RESET	=	\033[0m

all:	${NAME}
			@echo "$(RED)---------------done---------------$(RESET)"

${NAME}: ${OBJ}
			@ar rcs ${NAME} ${OBJ}

%.o:	%.c ft_printf.h
			@echo "Compiling$(YELLOW)" $< "$(RESET)"
			@${CC} ${CFLAGS} -c $< -o $@
			@echo "Added new file$(BLUE)" $@ "$(RESET)"

clean:
			@echo "$(GREEN)CLEANED$(RESET)"
			@${RM} ${OBJ}

fclean: clean
			@${RM} ${NAME}

re: fclean all