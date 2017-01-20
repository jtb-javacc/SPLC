//============================================================================
// Name        : SPLC.cpp
// Author      : 
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;
#include <fstream>
#include <iomanip>
#include <iostream>
#include <string>
#include <stdlib.h>
#include "SPLParser.h"

#include "JavaCC.h"
#include "SPLParserTokenManager.h"
#include "ParseException.h"
#include "DumpVisitor.h"

JAVACC_STRING_TYPE ReadFileFully(char *file_name) {
	return "(1 + 2) * (a + b);\n";
}

int main(int argc, char**argv) {
	JJString s = ReadFileFully(argv[1]);
	try {
		CharStream *stream = new CharStream(s.c_str(), s.size() - 1, 1, 1);
		SPLParserTokenManager *scanner = new SPLParserTokenManager(stream);
		SPLParser parser(scanner);
		parser.CompilationUnit();
		Node* n = parser.rootNode();
		DumpVisitor dumpVisitor;
		n->jjtAccept(&dumpVisitor, nullptr);
	} catch (const ParseException& e) {

	}
return 0;
}
