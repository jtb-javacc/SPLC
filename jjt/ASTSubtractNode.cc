#include "ASTSubtractNode.h"
#include "Integer.h"

  
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

	 unique_ptr<Integer> left((Integer*)stack.top()); stack.pop();
	 unique_ptr<Integer> right((Integer*)stack.top()); stack.pop();
	 stack.push(*left - *right);
  }

