#pragma once
#include"cocos2d.h"
using namespace cocos2d;
/*��������*/
class BackgroundLayer :public CCLayer
{
public:
	BackgroundLayer(void);
	/*static BackgroundLayer *create(){
		BackgroundLayer *layer = new BackgroundLayer();
		if (layer &&layer->init()){
			return layer;
		}
		else{
			delete layer;
		}
	}*/

	/*Ŀ�ľ����ṩ��������ľ�̬�������Ա�����ڴ������Ȼ�����Լ�дһ��create���� pRet->autorelease();
	���Ǽ��뵽�ڴ����أ�pRet->init()����Ϊʲô��ʱ��̳�Sprite����������ʱ��Ҫ���������Ա��ʼ���Լ���һЩ����*/
	CREATE_FUNC(BackgroundLayer);
	
	virtual bool init();
	~BackgroundLayer(void);
};





