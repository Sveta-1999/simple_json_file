CC=g++
CFLAGS=-std=c++11 -I./include
LDFLAGS=

SRC=my_source/main.cpp
OBJ=$(SRC:.cpp=.o)
EXEC=main

all: $(EXEC)

$(EXEC): $(OBJ)
	$(CC) $(LDFLAGS) $^ -o $@

%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

run: $(EXEC)
	./$(EXEC)

clean:
	rm -f $(EXEC) $(OBJ)
