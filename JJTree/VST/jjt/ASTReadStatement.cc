/* Generated By:JJTree: Do not edit this line. ASTReadStatement.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTReadStatement.h"
#include "SPLParserVisitor.h"

  
  ASTReadStatement::ASTReadStatement(int id) : SimpleNode(id) {
  }
  ASTReadStatement::ASTReadStatement(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTReadStatement::~ASTReadStatement() {
  }

  /** Accept the visitor. **/
  void ASTReadStatement::jjtAccept(SPLParserVisitor *visitor, void* data) const {
    visitor->visit(this, data);
  }

