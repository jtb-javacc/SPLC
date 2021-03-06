/* Generated By:JJTree: Do not edit this line. ASTId.h Version 7.0 */
/* JavaCCOptions:MULTI=true,NODE_USES_PARSER=false,VISITOR=true,TRACK_TOKENS=true,NODE_PREFIX=AST,NODE_EXTENDS=,NODE_FACTORY=,SUPPORT_CLASS_VISIBILITY_PUBLIC=true */
#pragma once

#include "SimpleNode.h"

class SPLParser;

class ASTId : public SimpleNode {
public: 
           ASTId(int id);
           ASTId(SPLParser *parser, int id);
  virtual ~ASTId();

  /** Accept the visitor. **/
  virtual void jjtAccept(SPLParserVisitor *visitor, void* data) const ;

  friend class Interpret;
  friend class SPLParser;

private:
	JJString name;
};

