/* Generated By:JJTree: Do not edit this line. ASTBitwiseComplNode.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTBitwiseComplNode.h"
#include "Integer.h"

  
  ASTBitwiseComplNode::ASTBitwiseComplNode(int id) : SimpleNode(id) {
  }
  ASTBitwiseComplNode::ASTBitwiseComplNode(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTBitwiseComplNode::~ASTBitwiseComplNode() {
  }


  void ASTBitwiseComplNode::interpret()
  {
     jjtGetChild(0)->interpret();

	 unique_ptr<Integer> top((Integer*)stack.top()); stack.pop();

     stack.push(new Integer(~(*top)));
  }