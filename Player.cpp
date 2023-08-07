#include "Player.hpp"
#include <raylib.h>
#include <raymath.h>

Player::Player()
{
    init();
}
Player::~Player()
{
    deinit();   
}

void Player::init()
{
    position = { 100, 100};
    velocity = {0, 0};
}
void Player::deinit()
{

}

void Player::movement()
{
    if(IsKeyDown(KEY_W)) 
        velocity.y = -1;
    else if(IsKeyDown(KEY_S)) 
        velocity.y = 1;
    else
        velocity.y = 0;

    if(IsKeyDown(KEY_A)) 
        velocity.x = -1;
    else if(IsKeyDown(KEY_D)) 
        velocity.x = 1;
    else
        velocity.x = 0;

    Vector2Normalize(velocity);
}

void Player::update() 
{
    movement();

    position.x += velocity.x * speed;
    position.y += velocity.y * speed;
}
void Player::render()
{
    DrawRectangle(position.x, position.y, 100, 100, RAYWHITE);
}