TARGET = valid_palindrome

SRC = solution.c

CC = gcc

CFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -rf $(TARGET)
	rm -rf $(TARGET).exe