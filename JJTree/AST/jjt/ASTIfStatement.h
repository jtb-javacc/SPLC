/* Generated By:JJTree: Do not edit this line. ASTIfStatement.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=false,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=MyNode,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"


class SPLParser;


class ASTIfStatement : public SimpleNode {
public: 
           ASTIfStatement(int id);
           ASTIfStatement(SPLParser *parser, int id);
  virtual ~ASTIfStatement();
  virtual void interpret();

};

