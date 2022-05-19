# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: pmeising <pmeising@student.42wolfsburg.de> +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/05/17 23:38:18 by pmeising          #+#    #+#              #
#    Updated: 2022/05/19 20:36:19 by pmeising         ###   ########.fr        #
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

.PHONY: bonus all clean fclean re

all:		${NAME}

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


# FILES    =    ft_atoi    \
#             ft_bzero    \
#             ft_calloc    \
#             ft_isalnum    \
#             ft_isalpha    \
#             ft_isascii    \
#             ft_isdigit    \
#             ft_isprint    \
#             ft_itoa    \
#             ft_memchr    \
#             ft_memcmp    \
#             ft_memcpy    \
#             ft_memmove    \
#             ft_memset    \
#             ft_putchar_fd    \
#             ft_putendl_fd    \
#             ft_putnbr_fd    \
#             ft_putstr_fd    \
#             ft_split    \
#             ft_strchr    \
#             ft_strdup    \
#             ft_striteri    \
#             ft_strjoin    \
#             ft_strlcat    \
#             ft_strlcpy    \
#             ft_strlen    \
#             ft_strmapi    \
#             ft_strncmp    \
#             ft_strnstr    \
#             ft_strrchr    \
#             ft_strtrim    \
#             ft_substr    \
#             ft_tolower    \
#             ft_toupper    \

# FILES_B        = ft_lstnew    \
#                 ft_lstadd_front    \
#                 ft_lstsize    \
#                 ft_lstlast    \
#                 ft_lstadd_back    \
#                 ft_lstdelone    \
#                 ft_lstclear    \
#                 ft_lstiter    \
#                 ft_lstmap    \

# NAME = libft.a

# CC = gcc
# CFLAGS = -Wall -Wextra -Werror
# AR = ar rcs
# RM = rm -f

# SRCS_DIR = ./
# SRCS = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES)))
# SRCS_B = $(addprefix $(SRCS_DIR), $(addsuffix .c, $(FILES_B)))

# OBJS_DIR = ./
# OBJS = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES)))
# OBJS_B = $(addprefix $(OBJS_DIR), $(addsuffix .o, $(FILES_B)))

# .c.o: $(SRCS)
# 	$(CC) $(CFLAGS) -c $< -o $(<:.c=.o)

# $(NAME): $(OBJS)
# 	$(AR) $@ $^

# bonus:	$(OBJS_B)
# 	$(AR) $(NAME) $^

# all: $(NAME)

# clean:
# 	$(RM) $(OBJS) $(OBJS_B)

# fclean: clean
# 	$(RM) $(NAME)

# re: clean all

# .PHONY: bonus all clean fclean re