CC=cc
NAME=libft_tester.a
CFLAGS=-Wall -Werror -Wextra
BSDOBJS=bsd_strlcpy.o bsd_strlcat.o

OBJS=common_tester.o libft_tester.o \
	 isalpha.o isdigit.o isalnum.o isascii.o isprint.o \
	 strlen.o memset.o bzero.o memcpy.o memmove.o \
	 strlcpy.o strlcpy_regular.o strlcpy_special.o \
	 strlcat.o strlcat_regular.o strlcat_special.o

$(NAME) : $(OBJS) $(BSDOBJS)
	cd .. && $(MAKE) all # First let's build the Libft
	ar rcs $(NAME) $(OBJS) $(BSDOBJS) # Building Libft tester library

# first we build libft.a and then libft_tester.a
all : $(NAME)

clean :
	rm -rf $(OBJS) $(BSDOBJS)

fclean : clean
	rm -rf $(NAME)

re : fclean all

# Let's compile the original strlcpy() from FreeBSD
bsd_strlcpy.o : libbsd/bsd_strlcpy.c libbsd/bsd_string.h
	$(CC) -c libbsd/bsd_strlcpy.c

# Let's compile the original strlcat() from FreeBSD
bsd_strlcat.o : libbsd/bsd_strlcat.c libbsd/bsd_string.h
	$(CC) -c libbsd/bsd_strlcat.c

# Let's compile all the sources of libft_tester library
common_tester.o : common_tester/common_tester.c common_tester/common_tester.h
	$(CC) -c common_tester/common_tester.c

libft_tester.o : src/libft_tester.c include/libft_tester.h
	$(CC) -c src/libft_tester.c

isalpha.o : src/isalpha.c include/libft_tester.h
	$(CC) -c src/isalpha.c

isdigit.o : src/isdigit.c include/libft_tester.h
	$(CC) -c src/isdigit.c

isalnum.o : src/isalnum.c include/libft_tester.h
	$(CC) -c src/isalnum.c

isascii.o : src/isascii.c include/libft_tester.h
	$(CC) -c src/isascii.c

isprint.o : src/isprint.c include/libft_tester.h
	$(CC) -c src/isprint.c

strlen.o : src/strlen.c include/libft_tester.h
	$(CC) -c src/strlen.c

memset.o : src/memset.c include/libft_tester.h
	$(CC) -c src/memset.c

bzero.o : src/bzero.c include/libft_tester.h
	$(CC) -c src/bzero.c

memcpy.o : src/memcpy.c include/libft_tester.h
	$(CC) -c src/memcpy.c

memmove.o : src/memmove.c include/libft_tester.h
	$(CC) -c src/memmove.c

strlcpy_regular.o : src/strlcpy_regular.c include/strlcpy.h include/libft_tester.h
	$(CC) -c src/strlcpy_regular.c

strlcpy_special.o : src/strlcpy_special.c include/strlcpy.h include/libft_tester.h
	$(CC) -c src/strlcpy_special.c

strlcpy.o : src/strlcpy.c include/strlcpy.h include/libft_tester.h
	$(CC) -c src/strlcpy.c

strlcat_regular.o : src/strlcat_regular.c include/strlcat.h include/libft_tester.h
	$(CC) -c src/strlcat_regular.c

strlcat_special.o : src/strlcat_special.c include/strlcat.h include/libft_tester.h
	$(CC) -c src/strlcat_special.c

strlcat.o : src/strlcat.c include/strlcat.h include/libft_tester.h
	$(CC) -c src/strlcat.c

.PHONY: all clean fclean re
