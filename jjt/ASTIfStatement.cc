/* Generated By:JJTree: Do not edit this line. ASTIfStatement.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTIfStatement.h"

  
  ASTIfStatement::ASTIfStatement(int id) : SimpleNode(id) {
  }
  ASTIfStatement::ASTIfStatement(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTIfStatement::~ASTIfStatement() {
  }


  void ASTIfStatement::interpret()
  {
     jjtGetChild(0)->interpret();

     if (((Boolean)stack[top--]).booleanValue())
        jjtGetChild(1)->interpret();
     else if (jjtGetNumChildren() == 3)
        jjtGetChild(2)->interpret();
  }

