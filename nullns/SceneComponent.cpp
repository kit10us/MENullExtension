// Copyright (c) 2002 - 2018, Evil Quail LLC
// All Rights Reserved

#include <nullns/SceneComponent.h>
#include <me/scene/component/SceneComponent.h>

using namespace nullns;

char* SceneComponent::Name()
{
	return "MENullSceneComponent";
}

SceneComponent::SceneComponent( me::os::IOS * os )
	: me::scene::component::SceneComponent( os, Name() )
{
}

SceneComponent::~SceneComponent()
{																	 
}
