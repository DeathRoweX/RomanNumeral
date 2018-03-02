# Compiler
CC = g++

# Source files
SOURCES = main.cpp roman.cpp

# Compile option flags
CFLAGS = -c -Wall

# Link library flags
LDFLAGS =

# Output file
EXECUTABLE = test

OBJDIR = ./obj
OBJECTS = $(SOURCES:%.cpp=$(OBJDIR)/%.o)

all: makeDir $(SOURCES) $(EXECUTABLE)

makeDir:
        mkdir -p $(OBJDIR)

$(EXECUTABLE): $(OBJECTS)
        $(CC) $(OBJECTS) $(LDFLAGS) -o $@

$(OBJDIR)/%.o: %.cpp
        $(CC) $(CFLAGS) $< -o $@

clean:
        rm -r $(OBJDIR)
~                            
