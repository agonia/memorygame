#include "HelpScene.h"

using namespace cocos2d;

CCScene* HelpScene::scene()
{
    CCScene *scene = CCScene::create();
    HelpScene *layer = HelpScene::create();
    scene->addChild(layer);
    return scene;
}

bool HelpScene::init()
{
    if ( !CCLayer::init() )
    {
        return false;
    }
    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    CCLabelTTF* pLabelTitle = CCLabelTTF::create("메모리게임", "BM-HANNAStd Bold", 34);
    pLabelTitle->setPosition( ccp(size.width / 2, size.height - 20) );
    this->addChild(pLabelTitle, 1);


    CCSprite* pSprite = CCSprite::create("HelloWorld.png");
    pSprite->setPosition( ccp(size.width/2, size.height/2) );
    this->addChild(pSprite, 0);
    
    return true;
}
