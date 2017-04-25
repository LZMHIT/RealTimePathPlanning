#pragma once
#include "nodeStruct.h"
#include "ofMain.h"
#include "obstacle.h"

class SMP
{
public:
	SMP();
	static void addNode(Nodes n, std::list<Nodes>& nodes);
	static Nodes* nearestNode(Nodes n, std::list<Nodes>& nodes);
	static Nodes* nearestNode(Nodes n, std::list<Nodes*>& nodes);
	static bool checkCollision(Nodes n1, Nodes n2, const list<obstacles> obst);
	static bool checkSample(Nodes n, const list<obstacles> obst);
	static Nodes sampler();
};