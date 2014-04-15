C_OPTIONS=-O2
LIBNODE_URL=LibNode
LIBCOMP_URL=../Compiler
LIBS=libnode libcomp
O_FILES=parser.o lexer.o main.o
EXEC=exe

all: $(EXEC)

exe: $(LIBS) main.o lexer.o parser.o
	g++ -g *.o -lfl $(LIBS) -o exe

.PHONY: libnode libcomp
	
libnode: 
	cd $(LIBNODE_URL) && make
	
libcomp: 
	cd $(LIBCOMP_URL) && make

main.o: main.cpp
	g++ -c $^
	
lexer.o: lexer.c
	g++ -c $^
	
lexer.c: lexer.l
	flex -olexer.c $^
	
lexer.l: parser.h
	
parser.h:
	bison -d parser.y -oparser.c
	
parser.o: parser.c
	g++ -c $^
	
clean: 
	rm -f exe *.o parser.c parser.h lexer.c y.tab.c libnode libcomp
	cd LibNode && make clean
	cd $(LIBCOMP_URL) && make clean
