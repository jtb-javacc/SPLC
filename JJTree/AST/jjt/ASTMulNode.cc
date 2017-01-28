/* Generated By:JJTree: Do not edit this line. ASTMulNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTMulNode.h"
#include "Integer.h"

  
  ASTMulNode::ASTMulNode(int id) : SimpleNode(id) {
  }
  ASTMulNode::ASTMulNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTMulNode::~ASTMulNode() {
  }

  void ASTMulNode::interpret()
  {
     jjtGetChild(0)->interpret();
     jjtGetChild(1)->interpret();

	 unique_ptr<Integer> left((Integer*)stack.top()); stack.pop();
	 unique_ptr<Integer> right((Integer*)stack.top()); stack.pop();
	 stack.push(*left * *right);
  }
