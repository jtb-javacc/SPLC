/* Generated By:JJTree: Do not edit this line. ASTMulNode.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"


class SPLParser;


class ASTMulNode : public SimpleNode {
public: 
           ASTMulNode(int id);
           ASTMulNode(SPLParser *parser, int id);
  virtual ~ASTMulNode();
  virtual void interpret();

};

