/* Generated By:JJTree: Do not edit this line. ASTBlock.cc Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#include "ASTBlock.h"

  
  ASTBlock::ASTBlock(int id) : SimpleNode(id) {
  }
  ASTBlock::ASTBlock(SPLParser *parser, int id) : SimpleNode(parser, id) {
  }
  ASTBlock::~ASTBlock() {
  }

  void ASTBlock::interpret()
  {
     int i, k = jjtGetNumChildren();

     for (i = 0; i < k; i++)
        jjtGetChild(i)->interpret();

  }

