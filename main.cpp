#include <raylib.h>

#define WIDTH 1920
#define HEIGHT 1080

#define BG_COLOR (Color){59, 48, 92}

void init(int width, int height, const char* title);

void update();

void render();

void deinit();

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
}

void update() {}

void render()
{
    BeginDrawing();

    ClearBackground(BG_COLOR);

    EndDrawing();
}

void deinit()
{
    CloseWindow();
}