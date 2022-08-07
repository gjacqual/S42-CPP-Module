# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: gjacqual <gjacqual@student.21-school.ru>   +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/04/30 23:10:10 by gjacqual          #+#    #+#              #
#    Updated: 2022/05/07 01:33:46 by gjacqual         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

# Program name
NAME		:=	megaphone

# Compilation Parameters
CXX			:=	clang++
CXXFLAGS		:=	-Wall -Wextra -Werror -std=c++98 -pedantic
RM			:=	rm -f

SRCS	=	./megaphone.cpp
			
# Object files
OBJS_DIR 	:=	./objs/

OBJS		:=  ${addprefix ${OBJS_DIR}, ${notdir ${SRCS:.cpp=.o}}}

# Targets
all 		:	 
				${MAKE} ${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CXXFLAGS} ${OBJS} -o ${NAME}
				@echo "\033[1;32mCPP Module is ready\033[0m"

${OBJS_DIR}: 
			@mkdir -p ${OBJS_DIR}	

${OBJS_DIR}%.o : %.cpp Makefile | ${OBJS_DIR}  
				${CXX} ${CXXFLAGS} -c $< -o $@

#Utils
clean:
				@rm -rf ${OBJS_DIR}
				@echo "\033[1;96mCPP Module is Cleaned\033[0m"	

fclean: 	clean
				@${RM} ${NAME}
				@echo "\033[1;96mCPP Module are Full Cleaned\033[0m"	

re			:	fclean all

.PHONY		: 	all clean fclean re
