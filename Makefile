# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jekim <arabi1549@naver.com>                +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/17 14:27:51 by jekim             #+#    #+#              #
#    Updated: 2021/11/17 14:28:48 by jekim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC				= gcc
RM				= rm -f
CFLAGS			= -Wall -Wextra -Werror -I.

NAME			= libvec.a

SRCS			=	


OBJS			= $(SRCS:.c=.o)


all:			$(NAME)

$(NAME):		$(OBJS)
				@ar rc $(NAME) $(OBJS)
				@echo "\033[0;92m* $(NAME) was created *\033[0m"

%.o : %.c
	@$(CC) $(CCFLAG) $< -c -o $@

clean:
				@$(RM) $(OBJS)

fclean:			clean
				@$(RM) $(NAME)
				@echo "\033[0;91m* $(NAME) was removed *\033[0m"

re:				fclean $(NAME)

.PHONY:			all clean fclean re bonus

