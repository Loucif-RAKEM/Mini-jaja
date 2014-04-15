SRC=$(wildcard *.cpp)
O_FILES=$(SRC:.cpp=.o)
LIB=libnode

all:$(LIB)

libnode:$(O_FILES)
	ar rvs $@ $^
	cp $@ ../

%.o:.cpp
	g++ -c $^

clean:
	rm -rf *.o $(LIB) *~ ../libnode
