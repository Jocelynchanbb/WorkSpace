#include "FishLayer.h"
#include "Fish.h"
#define FISH_MAX_COUNT 50


FishLayer::FishLayer(void)
{
}


FishLayer::~FishLayer(void)
{
	CC_SAFE_RELEASE_NULL(_fishes);
}

bool FishLayer::init()
{
	if (!CCLayer::init())
	{
		return false;
	}
	/*����*/
	/*Fish *fish = Fish::create((FishType)1);
	addChild(fish);
	fish->setPosition(ccp(1024,800));*/

	_fishes = CCArray::createWithCapacity(FISH_MAX_COUNT);//_fishesָ��ָ������Ϊ50���������
	CC_SAFE_RETAIN(_fishes);//���鴴����ɺ���Ҫͨ��CC_SAFE_RETAIN(_fishes)���䱣����������Ȼ�ᱻ���ճظ����յ�
	for (int i=0; i < FISH_MAX_COUNT; i++)
	{
		int type = CCRANDOM_0_1() *k_Fish_Type_Count -1;//�õ�ĳ�����ĳ�����
		CCLOG("FishLayer type=%d", type);
		//type = (FishType)100;
		/*typeֻ��1��ֻ���ؽ�һ�֣�����Fish��init������*/
		Fish *fish = Fish::create((FishType)type);//���ɶ�Ӧ�������
		_fishes->addObject(fish);
	}
	this->schedule(schedule_selector(FishLayer::addFish), 3.0);//ÿ��3��ͻ����һ��addFish����
	return true;
}



void FishLayer::addFish(float delta)
{
	int addToCount = CCRANDOM_0_1() * 10 + 1;//�������������ʾ�˴�Ҫ���ɵ��������
	int count = 0;
	CCObject *obj;
	CCSize winSize = CCDirector::sharedDirector()->getWinSize();//�õ����ڴ�С

	/*CCARRAY_FOREACH������ı���*/
	CCARRAY_FOREACH(_fishes, obj)
	{
		Fish *fish = (Fish *)obj;
		if (fish->isRunning())
		{
			continue;
		}
		count++;

		/*�������x�����y���꣬����fish��λ��*/
		fish->setPosition(ccp(CCRANDOM_0_1()*winSize.width, CCRANDOM_0_1()*winSize.height));
		this->addChild(fish);
		if (count == addToCount)
		{
			break;
		}
	}
}