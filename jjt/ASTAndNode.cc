/* Generated By:JJTree: Do not edit this line. ASTAndNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "../ast/ASTAndNode.h"

  
  ASTAndNode::ASTAndNode(int id) : SimpleNode(id) {
  }
  ASTAndNode::ASTAndNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTAndNode::~ASTAndNode() {
  }
  void ASTAndNode::interpret()
  {
     jjtGetChild(0).interpret();

     if (!((Boolean)stack[top]).booleanValue())
     {
        stack[top] = new Boolean(false);
        return;
     }

     jjtGetChild(1).interpret();
     stack[--top] = new Boolean(((Boolean)stack[top]).booleanValue() &&
                                ((Boolean)stack[top + 1]).booleanValue());
  }

