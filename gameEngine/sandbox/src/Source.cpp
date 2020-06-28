#include <gameEngine.h>

class SandBox : public gameEngine::Aplication
{
public:
	SandBox()
	{}
	~SandBox()
	{}
};

gameEngine::Aplication* gameEngine::CreateAplication()
{
	return new gameEngine::Aplication();
}

