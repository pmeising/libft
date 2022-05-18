# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 23:38:18 by pmeising          #+#    #+#              #
#    Updated: 2022/05/18 10:16:21 by pmeising         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME		:= libft.a
CFLAGS		:= -Wall -Wextra -Werror
CC 			:= gcc
RM			:= rm -f
AR			:= ar rcs
LIBFT		:= libft.h

SRCS	:=	ft_atoi.c	\
			ft_bzero.c	\
			ft_calloc.c	\
			ft_isalnum.c	\
			ft_isalpha.c	\
			ft_isascii.c	\
			ft_isdigit.c	\
			ft_isprint.c	\
			ft_itoa.c		\
			ft_memchr.c		\
			ft_memcmp.c		\
			ft_memcpy.c		\
			ft_memmove.c	\
			ft_memset.c		\
			ft_putchar_fd.c	\
			ft_putendl_fd.c	\
			ft_putnbr_fd.c	\
			ft_putstr_fd.c	\
			ft_split.c		\
			ft_strchr.c		\
			ft_strdup.c		\
			ft_striteri.c	\
			ft_strjoin.c	\
			ft_strlcat.c	\
			ft_strlcpy.c	\
			ft_strlen.c		\
			ft_strmapi.c	\
			ft_strncmp.c	\
			ft_strnstr.c	\
			ft_strrchr.c	\
			ft_strtrim.c	\
			ft_substr.c		\
			ft_tolower.c	\
			ft_toupper.c	\

SRCBONUS := ft_lstnew.c	\
			ft_lstadd_front.c	\
			ft_lstsize.c		\
			ft_lstlast.c		\
			ft_lstadd_back.c	\
			ft_lstdelone.c	\
			ft_lstclear.c		\
			ft_lstiter.c		\

OBJS		:= ${SRCS:.c=.o}

B_OBJS		:= ${SRCBONUS:.c=.o}

PARALLEL ?= -j

.PHONY: bonus all clean fclean re

all:		${NAME}
					${PARALLEL} ${NAME}

$(NAME):	${OBJS} ${LIBFT}
			${AR} ${NAME} ${OBJS}
			ranlib ${NAME}

bonus:		${B_OBJS}
			${AR} ${NAME} ${B_OBJS}
			ranlib ${NAME}

%.o: %.c $(LIBFT)
			${CC} ${CFLAGS} -c $< -o $@

clean:
	${RM} ${OBJS} ${B_OBJS}

fclean:		clean
	${RM} $(NAME)

re:			fclean all
