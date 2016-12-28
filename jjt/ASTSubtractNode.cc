#include "ASTSubtractNode.h"

  
  ASTSubtractNode::ASTSubtractNode(int id) : SimpleNode(id) {
  }
  ASTSubtractNode::ASTSubtractNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTSubtractNode::~ASTSubtractNode() {
  }

  void ASTSubtractNode::interpret()
  {
     jjtGetChild(0)->interpret();
     jjtGetChild(1)->interpret();

     stack[--top] = new Integer(((Integer)stack[top]).intValue() -
                                ((Integer)stack[top + 1]).intValue());
  }

