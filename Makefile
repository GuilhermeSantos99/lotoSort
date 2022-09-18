# Name of the project
PROJ_NAME=lotoSort

# .cpp files
CPP_SOURCE=$(wildcard *.cpp)

# .hpp files
HPP_SOURCE=$(wildcard *.hpp)

# Object files
OBJ=$(CPP_SOURCE:.c=.o)

# Compiler
CC=g++

# Flags for compiler
CC_FLAGS=-c         \
         -W         \
         -Wall      \
         -ansi      \
         -pedantic

#
# Compilation and linking
#
all: $(PROJ_NAME)

$(PROJ_NAME): $(OBJ)
	$(CC) -o $@ $^

%.o: %.cpp %.hpp
	$(CC) -o $@ $< $(CC_FLAGS)

main.o: main.cpp $(H_SOURCE)
	$(CC) -o $@ $< $(CC_FLAGS)

clean:
	rm -rf *.o $(PROJ_NAME) *~
