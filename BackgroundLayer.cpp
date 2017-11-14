#include "BackgroundLayer.h"
USING_NS_CC;

BackgroundLayer::BackgroundLayer(void)
{
}


BackgroundLayer::~BackgroundLayer(void)
{
}

bool BackgroundLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	CCSprite *bgSprite = CCSprite::create("bj01_01-ipadhd.png");

/*�Ѿ���ӵ�����ӽڵ�*/
	this->addChild(bgSprite);
	
	
	
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();
	
	
	/*���ñ���ͼ��ʾλ�ã������λ���ڴ��ڵ����ģ�*/
	//bgSprite->setPosition(CCPoint(winSize.width / 2, winSize.height / 2));
	bgSprite->setPosition(this->getAnchorPointInPoints());



	//CCLabelTTF* pLabel = CCLabelTTF::create("FishingJon","fonts/Marker Felt.ttf",70);

	// position the label on the center of the screen
	//pLabel->setPosition(CCPoint(winSize.width / 2, winSize.height-50));

	// add the label as a child to this layer
	//this->addChild(pLabel);

	return true;
}