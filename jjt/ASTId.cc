/* Generated By:JJTree: Do not edit this line. ASTId.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTId.h"

  
  ASTId::ASTId(int id) : SimpleNode(id) {
  }
  ASTId::ASTId(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTId::~ASTId() {
  }


  void ASTId::interpret()
  {
     stack.push(symtab.get(name));
  }

