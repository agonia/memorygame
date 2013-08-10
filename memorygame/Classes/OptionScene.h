#ifndef __OPTION_SCENE_H__
#define __OPTION_SCENE_H__

#include "cocos2d.h"

class OptionScene : public cocos2d::CCLayer
{
public:

    virtual bool init();
    static cocos2d::CCScene* scene();
    CREATE_FUNC(OptionScene);
};

#endif