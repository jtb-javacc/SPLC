#include "ASTWhileStatement.h"
#include "Boolean.h"

  
  ASTWhileStatement::ASTWhileStatement(int id) : SimpleNode(id) {
  }
  ASTWhileStatement::ASTWhileStatement(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTWhileStatement::~ASTWhileStatement() {
  }


  void ASTWhileStatement::interpret()
  {
     do {
       jjtGetChild(0)->interpret();

       if (((Boolean)stack[top--]).booleanValue())
          jjtGetChild(1)->interpret();
       else
          break;
    } while (true);
  }
