FT_NAME			= ft_containers

STD_NAME		= std_containers

INCDIR			= includes/

# FTDIR 		= srcs/

TESTDIR			= #tests/

OBJDIR			= objs/

# FT_SRCS		= ${FTDIR}main.cpp \

FT_SRCS			= main.cpp

# tests
# FT_SRCS		+=	${TESTDIR}test_vector_iterator.cpp \
# 				${TESTDIR}test_vector_container.cpp \
# 				${TESTDIR}test_vector_reverse_iterator.cpp \
# 				${TESTDIR}test_stack.cpp \
# 				${TESTDIR}test_map.cpp


# stack
# SRCS			+= ${STACKDIR}stack.cpp

# stack
# SRCS			+= ${STACKDIR}

# map
# SRCS			+= ${MAPDIR}

# STD
# SRCS			+= ${SRDDIR}

FT_OBJS 		= ${FT_SRCS:%.cpp=${OBJDIR}%.o}

STD_OBJS 		= ${FT_SRCS:%.cpp=${OBJDIR}%_std.o}

FT_DEP			= ${FT_SRCS:%.cpp=${OBJDIR}%.d}

STD_DEP			= ${FT_SRCS:%.cpp=${OBJDIR}%_std.d}

CC				= c++

CFLAGS			= -Wall -Wextra -Werror --std=c++98 -I ${INCDIR} -g3 #-fsanitize=address

DEL				= rm -rf

all:			${FT_NAME} ${STD_NAME}

${FT_NAME}: 	${FT_OBJS}
				${CC} ${CFLAGS} -o ${FT_NAME} ${FT_OBJS}

${STD_NAME}:	${STD_OBJS}
				${CC} ${CFLAGS} -o ${STD_NAME} ${STD_OBJS}

-include		${FT_DEP} ${STD_DEP}

${FT_OBJS}:		${OBJDIR}%.o:%.cpp
				@mkdir -p $(dir $@)
				${CC} -I ${INCDIR} -MMD -MP -D TESTED_NAMESPACE=ft -o $@ -c $< ${CFLAGS}

${STD_OBJS}:	${OBJDIR}%_std.o:%.cpp
				@mkdir -p $(dir $@)
				${CC} -I ${INCDIR} -MMD -MP -D TESTED_NAMESPACE=std -o $@ -c $< ${CFLAGS}

diff:			all
				@echo  "Diffing\c"
				@./${FT_NAME} > ft_test.txt
				@./${STD_NAME} > std_test.txt
				diff ft_test.txt std_test.txt
				@echo "\033[32m\t[OK]\033[0m"

clean:
				${DEL} ${FT_OBJS} ${STD_OBJS} ${OBJDIR} ${OBJDIR} ${FT_DEP} ${STD_DEP}
				@echo "\033[32m\t[CLEAN OK]\033[0m"

fclean:			clean
				${DEL} ${FT_NAME} ${STD_NAME}
				@echo "\033[32m\t[FCLEAN OK]\033[0m"

re:				fclean all

.PHONY:			all clean fclean re
