#include "ASTWriteStatement.h"

  
  ASTWriteStatement::ASTWriteStatement(int id) : SimpleNode(id) {
  }
  ASTWriteStatement::ASTWriteStatement(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTWriteStatement::~ASTWriteStatement() {
  }


  void ASTWriteStatement::interpret()
  {
#ifdef FIXME
     if (symtab.get(name) == null)
        System.err.println("Undefined variable : " + name);
    else
      try {
        out.write("Value of " + name + " : " + symtab.get(name));
        out.flush();
      } catch (IOException e) {
        e.printStackTrace();
        System.exit(1);
      }
#endif
  }

