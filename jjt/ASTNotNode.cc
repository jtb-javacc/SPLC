/* Generated By:JJTree: Do not edit this line. ASTNotNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTNotNode.h"
#include "Boolean.h"

  
  ASTNotNode::ASTNotNode(int id) : SimpleNode(id) {
  }
  ASTNotNode::ASTNotNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTNotNode::~ASTNotNode() {
  }

  void ASTNotNode::interpret()
  {
     jjtGetChild(0)->interpret();
     stack[top] = new Boolean(!((Boolean)stack[top]).booleanValue());
  }


