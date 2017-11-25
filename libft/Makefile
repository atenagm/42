NAME 		= main
CC			= clang
CFLAGS		= -Wall -Wextra -Werror
SRC_DIR		= src
OBJ_DIR 	= obj
SRC_FILES 	= $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES 	= $(patsubst $(SRC_DIR)/%.c,$(OBJ_DIR)/%.o,$(SRC_FILES))

all: $(OBJ_FILES)
	ar rcs libft.a $^
e: $(NAME)

$(NAME): $(OBJ_FILES)
	$(CC) -o $@ $^
	./$(NAME)

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.c
	$(CC) $(CFLAGS) -c -o $@ $<

clean:
	-rm -f $(OBJ_DIR)/*.o

fclean: clean
	-rm -f $(NAME)

so:
	$(CC) -g -fPIC $(CFLAGS) -pedantic $(SRC_FILES) -shared -o libft.so
test:
	cd ../libft-unit-tests
