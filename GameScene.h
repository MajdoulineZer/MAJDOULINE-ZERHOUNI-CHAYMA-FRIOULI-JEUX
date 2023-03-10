#ifndef __GAME_SCENE_H__
#define __GAME_SCENE_H__

#include "cocos2d.h"


class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();

    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
 

    virtual bool init();

    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
  
    void physique1(cocos2d::Sprite* sprite);
    bool GameScene::onContactBegin(cocos2d::PhysicsContact& contact);
   
private:
    
    cocos2d::Sprite* cat;
    cocos2d::Sprite* KEY;

    
};

#endif // __GAME_SCENE_H__