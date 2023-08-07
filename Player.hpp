#pragma once

#include <raylib.h>
#include <raymath.h>

class Player
{
public:
    Player();
    virtual ~Player();

    void update();
    void render();

private:
    void init();
    void deinit();
    
    void movement();
private:
    float speed = 7;

    Rectangle collBox = { 0 };

    Vector2 position = { 0 };
    Vector2 velocity = { 0 };
};