NAME = libasm.a
NASM = nasm
OPTIONS = -f elf64
SOURCES = srcs/ft_strlen.s \
	srcs/ft_write.s \
	srcs/ft_read.s
OBJECTS = $(SOURCES:.s=.o)

%.o : %.s
	$(NASM) $(OPTIONS) $<

$(NAME): $(OBJECTS)
	ar rcs $(NAME) $(OBJECTS)

all: $(NAME)

clean:
	rm -rf $(OBJECTS)

fclean: clean
	rm -f $(NAME) a.out

re: fclean all
