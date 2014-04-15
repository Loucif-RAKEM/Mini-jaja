all: libcomp

libcomp: VisitComp.o
	ar rvs $@ $^
	cp $@ ../LexerParser/

%.o:.cpp
	g++ -c $^
	
clean: 
	rm -f *.o libcomp *~
