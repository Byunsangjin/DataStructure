//
//  ExpreesionTree.h
//  Chapter8-2
//
//  Created by sjbyun on 2018. 7. 23..
//  Copyright © 2018년 변상진. All rights reserved.
//

#ifndef __EXPRESSION_TREE_H__
#define __EXPRESSION_TREE_H__

#include "BinaryTree2.h"

BTreeNode * MakeExpTree(char exp[]);
int EvaluateExpTree(BTreeNode * bt);

void ShowPrefixTypeExp(BTreeNode * bt);
void ShowInfixTypeExp(BTreeNode * bt);
void ShowPostfixTypeExp(BTreeNode * bt);

#endif
