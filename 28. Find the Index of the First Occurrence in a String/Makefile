TARGET = find_the_index_of_the_first_occurrence_in_string

SRC = solution.c

CC = gcc

CFLAGS = -Wall -g

all: $(TARGET)

$(TARGET): $(SRC)
	$(CC) $(CFLAGS) -o $(TARGET) $(SRC)

run: $(TARGET)
	./$(TARGET) > output.txt

clean:
	rm -rf $(TARGET)
	rm -rf $(TARGET).exe
	rm -rf output.txt