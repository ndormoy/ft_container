FT_NAME = ft_container
STD_NAME = std_container

# SRCDIR = includes/obj
OBJDIR = objs
INCDIR = includes

CC = clang++ -std=c++98
CFLAGS = -Wall -Wextra -Werror -g3 -MD #-fsanitize=address
MEM = #-fsanitize=thread

ifeq ($(TMEM),0)
MEM =
endif

INC = 	includes/vector.hpp \
		includes/enable_if.hpp \
		includes/equals.hpp \
		includes/is_integral.hpp \
		includes/iterator_traits.hpp \
		includes/iterator_utils.hpp \
		includes/pair.hpp \
		includes/reverse_iterator.hpp \
		includes/vector_utils.hpp \
		includes/vector.hpp

SRC =	main.cpp

FT_OBJS = $(addprefix ${OBJDIR}/,${SRC:.cpp=_ft.o})
STD_OBJS = $(addprefix ${OBJDIR}/,${SRC:.cpp=_std.o})

DEP = $(addprefix ${OBJDIR}/,${FT_OBJS:.o=.d}) $(addprefix ${OBJDIR}/,${STD_OBJS:.o=.d})

all: ${FT_NAME} ${STD_NAME}

-include $(DEP)

$(FT_NAME): ${FT_OBJS}
	${CC} ${CFLAGS} ${MEM} ${FT_OBJS} -I./${INCDIR} -o $@

$(STD_NAME): ${STD_OBJS}
	${CC} ${CFLAGS} ${MEM} ${STD_OBJS} -I./${INCDIR} -o $@

$(OBJDIR)/%_ft.o: $(SRCDIR)%.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -D TESTED_NAMESPACE=ft ${MEM} -I./${INCDIR} -c $< -o $@

$(OBJDIR)/%_std.o: $(SRCDIR)%.cpp
	@mkdir -p $(dir $@)
	${CC} ${CFLAGS} -D TESTED_NAMESPACE=std ${MEM} -I./${INCDIR} -c $< -o $@

re: fclean all

clean:
	@echo  "Cleaning objects\c"
	@rm -rf ${OBJDIR} $(DEP)
	@echo "\033[32m\t[OK]\033[0m"

fclean: clean
	@echo  "Removing files\c"
	@rm -rf ${FT_NAME} ${STD_NAME}
	@echo "\033[32m\t[OK]\033[0m"

diff: all
	@echo  "Diffing\c"
	@./${FT_NAME} > ft_test.txt
	@./${STD_NAME} > std_test.txt
	diff ft_test.txt std_test.txt
	@echo "\033[32m\t[OK]\033[0m"

.PHONY : all clean re fclean
