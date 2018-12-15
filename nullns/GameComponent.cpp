// Copyright (c) 2002 - 2018, Evil Quail LLC
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
	: me::game::GameComponent( Name() )
{
}

GameComponent::~GameComponent()
{																	 
}
