CUR_DIR = PhanSo
CC = gcc
CXX = g++
LIBS =
CXXFLAGS = -g -Wall
IDIR = ../$(CUR_DIR)/include
INCLUDE_BUILD = -I$(IDIR)
DEPS = phanso.h
DEPS_BUILD = $(patsubst %,$(IDIR)/%,$(DEPS))

SOURCE_DIR = ../$(CUR_DIR)/source

SOURCE = phanso.cpp main.cpp
OBJECT = $(patsubst %.cpp,%.o,$(SOURCE))
SOURCE_BUILD = $(patsubst %,$(SOURCE_DIR)/%,$(OBJECT))

EXE = main
REMOVE = rm -rf

%.o: %.cpp $(DEPS_BUILD)
	$(CXX) -c $(CXXFLAGS) -o $@ $< $(INCLUDE_BUILD)
$(EXE): $(SOURCE_BUILD)
	$(CXX) $(CXXFLAGS) -o $@ $^ $(INCLUDE_BUILD)
run:
	./$(EXE)




.PHONY: clean
clean :
	$(REMOVE) $(SOURCE_DIR)/*.o $(EXE)