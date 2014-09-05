/**
*@file StarNode.h
*@brief 
*
* ���ǣ����֣���ʧ������
*������Ҫʵ���������ܣ�1. һ��ʱ���ڣ������Զ����䣻2. ͨ����������������ǻ���
*@author DionysosLai��email: 906391500@qq.com
*@version 1.0
*@data 2014-7-25 12:29
*/
#ifndef __STAR_NODE_H__
#define __STAR_NODE_H__

#include "cocos2d.h"
#include "cocos-ext.h"

class StarNode : public cocos2d::CCNode, public cocos2d::CCTargetedTouchDelegate
{
public:
	StarNode();
	~StarNode();

	static StarNode* create();
	virtual bool init();

	virtual void update(float delta);

	virtual void onEnter();
	virtual void onExit();

	virtual bool ccTouchBegan(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);
	virtual void ccTouchEnded(cocos2d::CCTouch *pTouch, cocos2d::CCEvent *pEvent);

	CC_PROPERTY(bool, m_bStarOver, StarOver);
///@brief 
///@param[in/out] 
///@pre ǰ������ 
///@return 
	void setStarPosition(const cocos2d::CCPoint& point);
private:
	void initData();
///@brief 
///@param[in/out] 
///@pre ǰ������ 
///@return 
	void runBeautyAction(float delta);
///@brief 
///@param[in/out] 
///@pre ǰ������ 
///@return 
	void autorunBeautyAction(float delta);
///@brief ������ʱ��
///@param[in/out] 
///@pre ǰ������ 
///@return 
	void dealTouch();


private:
	cocos2d::CCMotionStreak* m_pMoStar;
	cocos2d::CCSprite* m_pSpStar;

	cocos2d::CCPoint m_point;
	bool m_bStarFly;

};
#endif	///<(__STAR_NODE_H__)