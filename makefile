# Makefile for Lab 27
CXX = /usr/bin/g++
MAIN = unit_test
CPP_FILES = unit_test.cpp
H_FILES = bst_nodet.h bs_treet.h
# CXXFLAGS = -Wall -Wextra -pedantic -g
CXXFLAGS = -g

# Type 'make' to create the executable
${MAIN}: ${MAIN}.cpp ${H_FILES} ${CPP_FILES}
	${CXX} ${CXXFLAGS} ${MAIN}.cpp ${CPP_FILES} -o $@
	@echo 'Use ./${MAIN} to run'

# Type 'make style' to check your code style
style: ../../helpful_files/cpplint.py ${FILE}
	python $< --filter=-runtime/references,-legal/copyright,-readability/streams,-runtime/explicit,-build/header_guard,-build/include ${MAIN}.cpp ${H_FILES} ${CPP_FILES}

# Type 'make clean' to remove the executable
clean:
	rm -rf ${MAIN}
