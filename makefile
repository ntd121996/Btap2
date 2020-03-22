CUR_DIR = ..
CC = gcc
CXX = g++
LIBS =
CXXFLAGS = -g -Wall
IDIR = include
DEBUG = Debug

INCLUDE_BUILD = -I$(IDIR) \
-I.

SOURCE_DIR = source

SOURCE = phanso.cpp main.cpp

SOURCE_BUILD = $(patsubst %.cpp,$(DEBUG)/%.o,$(SOURCE))

EXE = main
REMOVE = rm -rf

$(DEBUG)/%.o: $(SOURCE_DIR)/%.cpp
	$(CXX) -c $(CXXFLAGS) -o $@ $< $(INCLUDE_BUILD)
$(EXE): $(SOURCE_BUILD)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(INCLUDE_BUILD)
run:
	./$(EXE)




.PHONY: clean
clean :
	$(REMOVE) $(DEBUG)/*.o $(EXE)
