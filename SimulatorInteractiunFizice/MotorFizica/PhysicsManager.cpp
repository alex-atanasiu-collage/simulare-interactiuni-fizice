#include <iostream>
#include "PhysicsManager.h"
#include "debug.h"

using namespace Physics;

PhysicsManager::PhysicsManager(void)
{
	logInfoP("Physics Manager succesfully initialized");	
}


PhysicsManager::~PhysicsManager(void)
{
	logInfoP("Physics Manager succesfully destroyed");
}
