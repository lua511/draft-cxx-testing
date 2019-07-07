all: source1.o more.o
	ld -macosx_version_min 10.13.0 $^ -lc -o more3.bin

source1.o: source1.cpp
	clang++ -std=c++11 -Imembers -c $< -o source1.o

more.o: members/more.cpp
	clang++ -c $< -o more.o