CXX = g++
SRC = $(wildcard src/*.cpp)

all:
	$(CXX) $(SRC) -o bin/app.exe

test:
	$(CXX) test/main.cpp src/*.cpp -o bin/testeRegressivo.exe

clean:
	rm -f bin/*