#pragma once
#include "cocos2d.h"
using namespace cocos2d;
/*��̨��*/
class CannonLayer :
	public CCLayer
{
public:
	CannonLayer(void);
	CREATE_FUNC(CannonLayer);
	virtual bool init();
	virtual ~CannonLayer(void);
};

