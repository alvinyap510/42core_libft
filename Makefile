# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: alyap <alyap@student.42kl.edu.my>          +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/27 15:15:48 by alyap             #+#    #+#              #
#    Updated: 2022/02/27 15:16:02 by alyap            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME	=	libft.a

SRCS	=	ft_atoi.c \
			ft_bzero.c \
			ft_calloc.c \
			ft_isalnum.c \
			ft_isalpha.c \
			ft_isascii.c \
			ft_isdigit.c \
			ft_isprint.c \
			ft_memchr.c \
			ft_memcmp.c \
			ft_memcpy.c \
			ft_memmove.c \
			ft_memset.c \
			ft_strchr.c \
			ft_strdup.c \
			ft_strjoin.c \
			ft_strlcat.c \
			ft_strlcpy.c \
			ft_strlen.c \
			ft_strncmp.c \
			ft_strncmp.c \
			ft_strnstr.c \
			ft_strrchr.c \
			ft_substr.c \
			ft_tolower.c \
			ft_toupper.c \
			ft_strtrim.c

SRCSB	=	

OBJS	=	${SRCS:.c=.o}

CFLAGS	=	-Wall	-Wextra	-Werror -g3

.c.o:
	gcc ${CFLAGS} -c $< -o ${<:.c=.o}

${NAME}: ${OBJS}
	ar rcs ${NAME} ${OBJS} 

all:	${NAME}

clean:	
	rm -f ${OBJS}

fclean:	clean
	rm -f ${NAME}

re:	fclean	all


