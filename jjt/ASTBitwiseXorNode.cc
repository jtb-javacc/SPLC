/* Generated By:JJTree: Do not edit this line. ASTBitwiseXorNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTBitwiseXorNode.h"
#include "Boolean.h"
#include "Integer.h"

  
  ASTBitwiseXorNode::ASTBitwiseXorNode(int id) : SimpleNode(id) {
  }
  ASTBitwiseXorNode::ASTBitwiseXorNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTBitwiseXorNode::~ASTBitwiseXorNode() {
  }


  void ASTBitwiseXorNode::interpret()
  {
     jjtGetChild(0)->interpret();
     jjtGetChild(1)->interpret();

     if (stack[top] instanceof Boolean)
        stack[--top] = new Boolean(((Boolean)stack[top]).booleanValue() ^
                                ((Boolean)stack[top + 1]).booleanValue());
     else if (stack[top] instanceof Integer)
        stack[--top] = new Integer(((Integer)stack[top]).intValue() ^
                                ((Integer)stack[top + 1]).intValue());
  }
