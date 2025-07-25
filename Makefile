CC=gcc
CFLAGS=-Wall
SRC=game_engine/main.c game_engine/commands.c
OBJ=$(SRC:.c=.o)
TARGET=infilter8

all: $(TARGET)

$(TARGET): $(OBJ)
	$(CC) $(CFLAGS) -o $@ $^

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ) $(TARGET)
