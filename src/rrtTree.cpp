//----------------------------------------------------------------------
//      File:           rrtTree.cpp
//      Programmer:     Lening Li
//      Last modified:  9/23/15
//      Description:    RRT Tree code
//----------------------------------------------------------------------
// Copyright (c) 2015-2016 Worcester Polytechnic Institute and Lening Li.  
// All Rights Reserved.
// 
// This file and related documentation are part of the 
// Motion Planning Homework to implement Rapidly-exploring Random Trees.
// 
// Permission to use, copy, and distribute this software and its 
// documentation is hereby granted free of charge, provided that 
// (1) it is not a component of a commercial product, and 
// (2) this notice appears in all copies of the software and
//     related documentation. 
// 
// Worcester Polytechnic Institute and the author make no representations
// about the suitability or fitness of this software for any purpose.  It is
// provided "as is" without express or implied warranty.
//----------------------------------------------------------------------

# include "rrtTree.hpp"

void rrtTree::deleteNode(rrtNode &v)
{
	for(int i = 0;i < getSize(); i++)
	{
		if(_vertices[i] == v)
		{
			_vertices.erase(_vertices.begin() + i);
			return;
		}
	}
	return ;
}