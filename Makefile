#
# Makefile for test
# author: zhaokai
# date: 2013-11-28
#
# usage:
#
#

CXX = g++
CPPFLAGS += -isystem 
CXXFLAGS += -g -Wall -Wextra 
CURRENT_FOLDER = ./

SOURCE_FILES=\
	$(wildcard $(CURRENT_FOLDER)/*.cpp)

OBJ_FILES=\
	$(patsubst $(CURRENT_FOLDER)/%.cpp, $(CURRENT_FOLDER)/%.o, $(SOURCE_FILES))

TEST = test

all: $(TEST)

clean :
	rm -f $(TEST)
	rm -f $(CURRENT_FOLDER)/*.o

$(CURRENT_FOLDER)/%.o : $(CURRENT_FOLDER)/%.cpp
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) -c $< -o $@

$(TEST) : $(OBJ_FILES) $(SRC_OBJ_FILES)
	$(CXX) $(CPPFLAGS) $(CXXFLAGS) $^ -o $@
