# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: hidriouc <hidriouc@student.42.fr>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2023/11/07 09:36:08 by hidriouc          #+#    #+#              #
#    Updated: 2023/11/21 12:48:32 by hidriouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

src_c = ft_isalpha.c ft_isprint.c ft_memset.c  ft_strlcpy.c ft_strrchr.c\
	ft_bzero.c   ft_isascii.c ft_memcpy.c ft_strchr.c ft_strlen.c  ft_tolower.c\
	ft_isalnum.c ft_isdigit.c ft_memmove.c ft_strlcat.c ft_strncmp.c ft_toupper.c\
	ft_memchr.c ft_memcmp.c ft_strnstr.c ft_atoi.c ft_calloc.c ft_strdup.c ft_substr.c\
	ft_strjoin.c ft_strtrim.c ft_itoa.c ft_split.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c\
	ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c
	
src_bc = ft_lstadd_front_bonus.c ft_lstadd_back_bonus.c ft_lstclear_bonus.c ft_lstdelone_Bonus.c\
    ft_lstiter_bonus.c ft_lstmap_bonus.c ft_lstnew_bonus.c ft_lstsize_bonus.c ft_lstlast_bonus.c
	
NAME = libft.a
CFLAGS = -Wall -Wextra -Werror
src_o = $(src_c:.c=.o)
src_bo = $(src_bc:.c=.o)

all : $(NAME)

$(NAME) : $(src_o)
	ar rc $(NAME) $(src_o)

bonus :  $(src_bo)
	ar rc $(NAME) $(src_bo)
	
clean :
	rm -f $(src_o) $(src_bo)

%.o : %.c libft.h
	cc $(CFLAGS) -c $<  -o $@

fclean : clean
	rm -f $(NAME)

re : fclean all

.PHONY : all clean fclean re
