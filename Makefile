export LANG=en_US.UTF-8

lexer: CxxLexer.l CxxLexerDebug.cxx
	flex -d -t CxxLexer.l > CxxLexer.cxx
	g++ -g -I. -DLEXER_DEBUG CxxLexer.cpp CxxToken.cxx -o CxxLexerDebug 

all: CxxParser.o CxxLexer.o CxxToken.cxx
	g++ -g -I. -DNEEDS_YYWRAP  -Dparse.trace  CxxParser.o CxxLexer.cpp CxxToken.cxx -o tryit 
	
CxxParser.o: CxxParser.cpp CxxParser.cxx CxxParsing.cxx
	g++ -g -c -I. CxxParser.cpp -o CxxParser.o
		
CxxParser.cpp: CxxParser.y
	bison -t -d --html=CxxParser.html CxxParser.y -o CxxParser.cxx
	
CxxLexer.cxx: CxxLexer.l
	flex -d -t CxxLexer.l > CxxLexer.cxx
		
CxxLexer.o: CxxLexer.cxx
	g++ -g -c -I. CxxLexer.cpp -o CxxLexer.o
	
clean:
	rm -f CxxLexerDebug tryit *.o *.html *.xml *.output	CxxLexer.cxx CxxParser.cxx CxxParser.hxx
	
	