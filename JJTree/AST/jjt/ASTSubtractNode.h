#pragma once

#include "SimpleNode.h"


class SPLParser;


class ASTSubtractNode : public SimpleNode {
public: 
           ASTSubtractNode(int id);
           ASTSubtractNode(SPLParser *parser, int id);
  virtual ~ASTSubtractNode();
  virtual void interpret();

};

