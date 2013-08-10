#include "GameScene.h"

using namespace cocos2d;

CCScene* GameScene::scene()
{
    CCScene *scene = CCScene::create();
    GameScene *layer = GameScene::create();
    scene->addChild(layer);
    return scene;
}

bool GameScene::init()
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
bool gameModeRetry()
{
    
}
bool gotoMenu()
{

}
void gameResult()
{
    
}