# Program name
NAME		:=	serialization
# Compilation Parameters
CXX			:=	c++
CXXFLAGS	:=	-Wall -Wextra -Werror
STDCPP		:=	-std=c++98
RM			:=	rm -f

# source files
SRCS		:=	${shell find . -name '*.cpp'}
			
# Object files
OBJS_DIR 	:=	./objs/

OBJS		:=  ${addprefix ${OBJS_DIR}, ${notdir ${SRCS:.cpp=.o}}}

# Targets
all 		:	 
				${MAKE} ${NAME}

${NAME}		:	${OBJS}
				${CXX} ${CXXFLAGS} ${STDCPP} ${OBJS} -o ${NAME}
				@echo "\033[1;32mCPP Module is ready\033[0m"

${OBJS_DIR}:
				@mkdir -p ${OBJS_DIR}

${OBJS_DIR}%.o : %.cpp Makefile Data.hpp| ${OBJS_DIR}
				${CXX} ${CXXFLAGS} ${STDCPP} -c  $< -o $@

#Utils
clean		:
				@rm -rf ${OBJS_DIR}
				@echo "\033[1;96mCPP Module is Cleaned\033[0m"	

fclean		: 	clean
				@${RM} ${NAME}
				@echo "\033[1;96mCPP Module are Full Cleaned\033[0m"	

re			:	fclean all

# Leak Search
seleak		:
				@valgrind --leak-check=full --show-leak-kinds=all \
				--leak-resolution=med  --track-origins=yes ./${NAME}

.PHONY		: 	all clean fclean re
