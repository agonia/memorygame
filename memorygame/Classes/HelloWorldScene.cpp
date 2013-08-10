#include "HelloWorldScene.h"
#include "GameScene.h"
#include "SimpleAudioEngine.h"

using namespace cocos2d;
using namespace CocosDenshion;

CCScene* HelloWorld::scene()
{
    CCScene *scene = CCScene::create();
    HelloWorld *layer = HelloWorld::create();
    scene->addChild(layer);
    return scene;
}

bool HelloWorld::init()
{
    if ( !CCLayer::init() )
    {
        return false;
    }
    CCMenuItemImage *pMenuItem = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::gotoPage) );
    CCMenuItemImage *pMenuItem1 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );

    CCMenuItemImage *pMenuItem2 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );

    CCMenuItemImage *pMEnuItem3 = CCMenuItemImage::create(
                                        "CloseNormal.png",
                                        "CloseSelected.png",
                                        this,
                                        menu_selector(HelloWorld::menuCloseCallback) );

    pMenuItem   ->setPosition( ccp(0,0) );
    pMenuItem1  ->setPosition( ccp(0,100) );
    pMenuItem2  ->setPosition( ccp(0,200) );
    pMEnuItem3  ->setPosition( ccp(0,300) );

    CCMenu* pMenu = CCMenu::create(pMenuItem, pMenuItem1, pMenuItem2, pMEnuItem3, NULL);
    pMenu->setPosition( CCPointZero );
    this->addChild(pMenu, 1);

    
    CCSize size = CCDirector::sharedDirector()->getWinSize();
    
    CCLabelTTF* pLabelTitle = CCLabelTTF::create("메모리게임", "BM-HANNAStd Bold", 34);
    pLabelTitle->setPosition( ccp(size.width / 2, size.height - 20) );
    this->addChild(pLabelTitle, 1);


    CCSprite* pSprite = CCSprite::create("HelloWorld.png");
    pSprite->setPosition( ccp(size.width/2, size.height/2) );
    this->addChild(pSprite, 0);
    
    return true;
}

void HelloWorld::gotoPage()
{
    
}

void HelloWorld::menuCloseCallback(CCObject* pSender)
{
    CCDirector::sharedDirector()->end();

#if (CC_TARGET_PLATFORM == CC_PLATFORM_IOS)
    exit(0);
#endif
}
