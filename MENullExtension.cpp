// Copyright (c) 2002 - 2018, Kit10 Studios LLC
// All Rights Reserved

#include <MENullExtension.h>
#include <nullns/GameComponent.h>
#include <me/game/Game.h>

void DeleterNullExtension( nullns::GameComponent * component )
{
	delete component;
}

extern "C" MENULLEXTENSION_API bool MELoader( me::game::IGame * gameInstance, const qxml::Element * element);

MENULLEXTENSION_API bool MELoader( me::game::IGame * gameInstance, const qxml::Element * element )
{
	// Create the null extension game component.
	nullns::GameComponent * component = new nullns::GameComponent();

	// Add game component to our game instance. 
	// Requires a custom deleter which, because it's local to the DLL will used the DLL's memory block.
	gameInstance->AddComponent( me::game::component::IGameComponent::ptr( component, DeleterNullExtension ) );

	return true;
}

