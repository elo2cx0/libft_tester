CC=cc
NAME=libft_tester.a
CFLAGS=-Wall -Werror -Wextra
BSDOBJS=libbsd/strlcat.o libbsd/strlcpy.o # Original FreeBSD functions

OBJS=common_tester.o libft_tester.o \
	 isalpha.o isdigit.o isalnum.o isascii.o isprint.o \
	 strlen.o memset.o bzero.o memcpy.o memmove.o \
	 strlcpy.o strlcpy_regular.o strlcpy_special.o \
	 strlcat.o strlcat_regular.o strlcat_special.o

$(NAME) : $(OBJS) # The original FreeBSD functions don't change
	cd .. && $(MAKE) all # First let's build the Libft
	ar rcs $(NAME) $(OBJS) $(BSDOBJS) # Building Libft tester library

all : libft.a $(NAME)

clean :
	rm -rf $(OBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all



common_tester.o : common_tester/common_tester.c common_tester/common_tester.h
	$(CC) -c common_tester/common_tester.c

libft_tester.o : libft_tester.c include/libft_tester.h
	$(CC) -c libft_tester.c

isalpha.o : isalpha.c include/libft_tester.h
	$(CC) -c isalpha.c

isdigit.o : isdigit.c include/libft_tester.h
	$(CC) -c isdigit.c

isalnum.o : isalnum.c include/libft_tester.h
	$(CC) -c isalnum.c

isascii.o : isascii.c include/libft_tester.h
	$(CC) -c isascii.c

isprint.o : isprint.c include/libft_tester.h
	$(CC) -c isprint.c

strlen.o : strlen.c include/libft_tester.h
	$(CC) -c strlen.c

memset.o : memset.c include/libft_tester.h
	$(CC) -c memset.c

bzero.o : bzero.c include/libft_tester.h
	$(CC) -c bzero.c

memcpy.o : memcpy.c include/libft_tester.h
	$(CC) -c memcpy.c

memmove.o : memmove.c include/libft_tester.h
	$(CC) -c memmove.c

strlcpy_regular.o : strlcpy_regular.c include/strlcpy.h include/libft_tester.h
	$(CC) -c strlcpy_regular.c

strlcpy_special.o : strlcpy_special.c include/strlcpy.h include/libft_tester.h
	$(CC) -c strlcpy_special.c

strlcpy.o : strlcpy.c include/strlcpy.h include/libft_tester.h
	$(CC) -c strlcpy.c

strlcat_regular.o : strlcat_regular.c include/strlcat.h include/libft_tester.h
	$(CC) -c strlcat_regular.c

strlcat_special.o : strlcat_special.c include/strlcat.h include/libft_tester.h
	$(CC) -c strlcat_special.c

strlcat.o : strlcat.c include/strlcat.h include/libft_tester.h
	$(CC) -c strlcat.c

.PHONY: all clean fclean re
