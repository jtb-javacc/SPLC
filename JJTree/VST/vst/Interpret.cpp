/*
 * Interpret.cpp
 *
 *  Created on: 24 janv. 2017
 *      Author: FrancisANDRE
 */

#include "Interpret.h"
#include "Variable.h"
#include "Boolean.h"
#include "Integer.h"
#include "SPLParserConstants.h"

Interpret::Interpret() {
}

Interpret::~Interpret() {
}

void Interpret::visit(const ASTVarDeclaration *node, void* data) {
	{
		if (node->type == BOOL)
			symtab[node->name] = new Boolean(false);
		else
			symtab[node->name] = new Integer(0);
	}

}
void Interpret::visit(const ASTAssignment *node, void* data) {
}
void Interpret::visit(const ASTOrNode *node, void* data) {
}
void Interpret::visit(const ASTAndNode *node, void* data) {
}
void Interpret::visit(const ASTBitwiseOrNode *node, void* data) {
}
void Interpret::visit(const ASTBitwiseXorNode *node, void* data) {
}
void Interpret::visit(const ASTBitwiseAndNode *node, void* data) {
}
void Interpret::visit(const ASTEQNode *node, void* data) {
}
void Interpret::visit(const ASTNENode *node, void* data) {
}
void Interpret::visit(const ASTLTNode *node, void* data) {
}
void Interpret::visit(const ASTGTNode *node, void* data) {
}
void Interpret::visit(const ASTLENode *node, void* data) {
}
void Interpret::visit(const ASTGENode *node, void* data) {
}
void Interpret::visit(const ASTAddNode *node, void* data) {
}
void Interpret::visit(const ASTSubtractNode *node, void* data) {
}
void Interpret::visit(const ASTMulNode *node, void* data) {
}
void Interpret::visit(const ASTDivNode *node, void* data) {
}
void Interpret::visit(const ASTModNode *node, void* data) {
}
void Interpret::visit(const ASTBitwiseComplNode *node, void* data) {
}
void Interpret::visit(const ASTNotNode *node, void* data) {
}
void Interpret::visit(const ASTId *node, void* data) {
}
void Interpret::visit(const ASTIntConstNode *node, void* data) {
}
void Interpret::visit(const ASTTrueNode *node, void* data) {
}
void Interpret::visit(const ASTFalseNode *node, void* data) {
}
void Interpret::visit(const ASTReadStatement *node, void* data) {
}
void Interpret::visit(const ASTWriteStatement *node, void* data) {
}
