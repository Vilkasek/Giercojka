#include "Player.hpp"

#define WIDTH 1920
#define HEIGHT 1080

#define BG_COLOR (Color){59, 48, 92}

Player* player;

void init(int width, int height, const char* title);
void deinit();

void update();

void render();

int main()
{
    init(WIDTH, HEIGHT, "Giercojka");

    while (!WindowShouldClose()) 
    {
        update();
        render();
    }

    deinit();
}

void init(int width, int height, const char* title)
{
    InitWindow(width, height, title);

    SetTargetFPS(144);

    player = new Player();
}
void deinit()
{
    delete player;

    CloseWindow();
}

void update() 
{
    player -> update();
}

void render()
{
    BeginDrawing();

    ClearBackground(BG_COLOR);
    player -> render();

    EndDrawing();
}
