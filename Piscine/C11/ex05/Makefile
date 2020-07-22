CC = gcc
CFLAGS = -Wall -Wextra -Werror

SRCS = $(wildcard *.c)
OBJS = $(SRCS:.c=.o)

TARGET = do-op

all : $(TARGET)

%.o : %.c
	$(CC) $(CFLAGS) -c $<

$(TARGET) : $(OBJS)
	$(CC) $(CFLAGS) -o $@ $^

clean :
	rm -f $(OBJS)

fclean :
	rm -f $(TARGET)

re : fclean all
