NAME = libasm.a
NASM = nasm
OPTIONS = -f elf64
SOURCES = srcs/ft_strlen.asm \
	srcs/ft_write.asm
OBJECTS = $(SOURCES:.asm=.o)

%.o : %.asm
	$(NASM) $(OPTIONS) $<

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
