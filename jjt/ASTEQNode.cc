/* Generated By:JJTree: Do not edit this line. ASTEQNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTEQNode.h"

  
  ASTEQNode::ASTEQNode(int id) : SimpleNode(id) {
  }
  ASTEQNode::ASTEQNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTEQNode::~ASTEQNode() {
  }

  void ASTEQNode::interpret()
  {
     jjtGetChild(0).interpret();
     jjtGetChild(1).interpret();

     if (stack[top] instanceof Boolean)
        stack[--top] = new Boolean(((Boolean)stack[top]).booleanValue() ==
                                ((Boolean)stack[top + 1]).booleanValue());
     else
        stack[--top] = new Boolean(((Integer)stack[top]).intValue() ==
                                ((Integer)stack[top + 1]).intValue());
  }
