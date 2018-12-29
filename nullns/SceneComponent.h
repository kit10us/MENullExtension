// Copyright (c) 2002 - 2018, Evil Quail LLC
// All Rights Reserved

#pragma once

#include <MENullExtension.h>
#include <me/scene/component/SceneComponent.h>

namespace nullns
{
	class SceneComponent : public me::scene::component::SceneComponent
	{
	public:
		static char* Name();

		SceneComponent( me::os::IOS * os );
		~SceneComponent();

	public: // ISceneComponent...

	private:
	};
}
