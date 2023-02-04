# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: shammouc <marvin@42.fr>                    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2021/11/26 19:57:47 by shammouc          #+#    #+#              #
#    Updated: 2021/12/05 14:59:09 by shammouc         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = clang

FLAG = -Wall -Werror -Wextra 

SRC = ft_strtrim.c ft_substr.c ft_strjoin.c ft_split.c ft_itoa.c ft_strmapi.c ft_striteri.c ft_putchar_fd.c ft_putstr_fd.c ft_putendl_fd.c ft_putnbr_fd.c  ft_isalpha.c ft_isdigit.c ft_isalnum.c ft_isascii.c ft_isprint.c ft_strlen.c ft_memset.c ft_bzero.c ft_memcpy.c ft_memmove.c ft_toupper.c ft_tolower.c ft_strchr.c ft_strrchr.c ft_strncmp.c ft_memchr.c ft_memcmp.c ft_atoi.c ft_strchr.c ft_strrchr.c ft_strlcpy.c ft_strlcat.c ft_strnstr.c ft_calloc.c ft_strdup.c ft_substr.c ft_substr.c ft_strtrim.c ft_strmapi.c

BONUS = ft_lstnew.c ft_lstadd_front.c ft_lstsize.c ft_lstlast.c ft_lstdelone.c ft_lstclear.c ft_lstiter.c ft_lstmap.c ft_lstadd_back.c
EXEC = libft.a

OBJ = $(SRC:.c=.o)
OBJ_B = $(BONUS:.c=.o)

all : $(EXEC)
%.o : %.c
	$(CC) $(FLAG) -o $@ -c $<

$(EXEC) : $(OBJ) 
	ar rc $(EXEC) $^

bonus : $(OBJ_B)
	ar rc $(EXEC) $(OBJ) $(OBJ_B) $^

clean : 
	rm -f $(OBJ) $(OBJ_B)

fclean : clean
	 rm -f $(EXEC)
	
re : fclean all 
