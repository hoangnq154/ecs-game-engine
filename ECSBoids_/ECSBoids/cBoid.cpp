// Includes
//=========

#include "cBoid.h"

#include "cRenderComponent.h"
#include <Engine/EntityComponentSystem/ComponentManager.h>

// Initialization / Clean Up
//--------------------------

eae6320::cBoid::cBoid()
{

}

void eae6320::cBoid::Initialize()
{
	AddComponent<cRenderComponent>("data/meshes/pyramid.mesh", "data/effects/animated.effect", Math::sVector(0.0f, 0.0f, 0.0f), Math::cQuaternion());
}