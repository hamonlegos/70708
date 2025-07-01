#include <iostream>
#include <raylib.h>
#include "raymath.h"

int main() {
    bool mvscene = false;
    const int screenWidth = 900;
    const int screenHeight = 900;

    class player {
    public:
       int size = (40,40);
       Vector2 pos = {0,0};
    };

    player P1;
    P1.pos = Vector2{450,490};
    P1.size = 40;

    InitWindow(screenWidth, screenHeight, "70708");

    SetTargetFPS(60); 

    if (IsKeyDown(KEY_LEFT)) {
        P1.pos += Vector2Add(P1.pos, {-10,0});
    }

    while (!WindowShouldClose()) {
        DrawFPS(0,0);

        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangle(screenWidth/2 - 150, screenHeight/2, 300, 300, BLUE);
            DrawRectangle(screenWidth/2 - 140, screenHeight/2 + 10, 280, 280, BLACK);
            DrawRectangle(P1.pos.x, P1.pos.y, P1.size, P1.size, ORANGE);
        EndDrawing();
    }
    return 0;
}