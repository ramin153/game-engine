#pragma once
#include "core.h"
namespace gameEngine
{
	class GAMEENGINE_API Aplication
	{
	public:
		Aplication();
		virtual ~Aplication();
		void run();

	};
	//TO defined by client side
	Aplication* CreateAplication();

	
}
