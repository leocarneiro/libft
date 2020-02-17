# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lramos-r <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2020/01/22 15:50:53 by lramos-r          #+#    #+#              #
#    Updated: 2020/02/06 14:37:28 by lramos-r         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		= libft.a

SRC			= ft_atoi.c ft_isprint.c ft_strlen.c ft_bzero.c ft_memccpy.c ft_strncmp.c ft_isalnum.c ft_memcpy.c ft_strnstr.c ft_isalpha.c ft_memmove.c ft_strrchr.c ft_isascii.c ft_memset.c ft_tolower.c ft_isdigit.c ft_strchr.c ft_toupper.c ft_memchr.c ft_memcmp.c ft_strlcat.c ft_strlcpy.c ft_strdup.c ft_calloc.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c ft_substr.c ft_strjoin.c ft_itoa.c ft_strtrim.c ft_split.c ft_strmapi.c
SRC_BONUS	= ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstadd_back.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c

OBJ			= $(SRC:.c=.o)

OBJ_BONUS	= $(SRC_BONUS:.c=.o)

all:$(NAME)

$(NAME):	$(SRC) libft.h
	gcc -Wall -Werror -Wextra -I./ -c $(SRC)
	ar rc $(NAME) $(OBJ)
	ranlib $(NAME)

bonus:		$(SRC_BONUS) libft.h
	gcc -Wall -Werror -Wextra -I./ -c $(SRC_BONUS)
	ar rc $(NAME) $(OBJ_BONUS)
	ranlib $(NAME)

clean:
	rm -f $(OBJ) $(OBJ_BONUS)

fclean: clean
	rm -f $(NAME)

re: fclean all

norm:
	norminette *.[ch]
