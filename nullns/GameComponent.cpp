// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#include <nullns/GameComponent.h>
#include <nullns/SceneComponent.h>
#include <me/scene/SceneManager.h>

using namespace nullns;

char* GameComponent::Name()
{
	return "MENullExtensionGameComponent";
}

GameComponent::GameComponent()
	: me::game::component::GameComponent( Name() )
{
}

GameComponent::~GameComponent()
{																	 
}
