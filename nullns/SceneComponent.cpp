// Copyright (c) 2002 - 2018, Evil Quail LLC
// All Rights Reserved

#include <nullns/SceneComponent.h>
#include <me/scene/SceneComponent.h>

using namespace nullns;

char* SceneComponent::Name()
{
	return "MENullSceneComponent";
}

SceneComponent::SceneComponent( me::os::IOS * os )
	: me::scene::SceneComponent( os, Name() )
{
}

SceneComponent::~SceneComponent()
{																	 
}
