/*
 * CxxLexerDebug.cpp
 *
 *  Created on: 2021年12月9日
 *      Author: nick
 */
size_t error_count=0;
int tokenMarkDepth = 0;
void increment_error_count()
{
	error_count++;
}
int yywrap(){
	return 1;
}
int main(int argc, char**argv){
	extern FILE *yyin;
	if (argc==2){
		yyin=fopen(argv[1], "r");
		if (yyin){
			int token=0;
			while (token=yylex()){
				cout<<"yyleng:"<<yyleng<<"\tyytext:"<<yytext<<endl;
			}
		}
	}
}


