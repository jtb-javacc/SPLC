/* Generated By:JJTree: Do not edit this line. ASTOrNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTOrNode.h"

  
  ASTOrNode::ASTOrNode(int id) : SimpleNode(id) {
  }
  ASTOrNode::ASTOrNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTOrNode::~ASTOrNode() {
  }

  void ASTOrNode::interpret()
  {
     jjtGetChild(0)->interpret();

     if (((Boolean)stack[top]).booleanValue())
     {
        stack[top] = new Boolean(true);
        return;
     }

     jjtGetChild(1)->interpret();
     stack[--top] = new Boolean(((Boolean)stack[top]).booleanValue() ||
                                ((Boolean)stack[top + 1]).booleanValue());
  }

