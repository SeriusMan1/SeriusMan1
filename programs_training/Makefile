CC := gcc
CFLAGS := -Wall -Wextra -Werror

SRC_DIR := srcs
INC_DIR := includes

SRC_FILES := $(wildcard $(SRC_DIR)/*.c)
OBJ_FILES := $(SRC_FILES:.c=.o)

LIB_NAME := libft.a

all: $(LIB_NAME)

$(LIB_NAME): $(OBJ_FILES)
    @ar rcs $(LIB_NAME) $(OBJ_FILES)
    @echo "Library $(LIB_NAME) created successfully."

%.o: %.c
    @$(CC) $(CFLAGS) -I$(INC_DIR) -c $< -o $@
    @echo "Compiled $<"

clean:
@rm -f $(OBJ_FILES)
    @echo "Object files removed."

fclean: clean
    @rm -f $(LIB_NAME)
    @echo "$(LIB_NAME) removed."

re: fclean all

.PHONY: all clean fclean re
