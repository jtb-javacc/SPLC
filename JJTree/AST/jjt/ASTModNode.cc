/* Generated By:JJTree: Do not edit this line. ASTModNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTModNode.h"
#include "Integer.h"

  
  ASTModNode::ASTModNode(int id) : SimpleNode(id) {
  }
  ASTModNode::ASTModNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTModNode::~ASTModNode() {
  }

  void ASTModNode::interpret()
  {
     jjtGetChild(0)->interpret();
     jjtGetChild(1)->interpret();

	 unique_ptr<Integer> left((Integer*)stack.top()); stack.pop();
	 unique_ptr<Integer> right((Integer*)stack.top()); stack.pop();
	 stack.push(*left % *right);
  }
