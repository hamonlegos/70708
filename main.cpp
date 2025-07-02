#include <iostream>
#include <raylib.h>
#include "raymath.h"

int main() {
    bool mvscene = false;
    const int screenWidth = 900;
    const int screenHeight = 900;

    class player {
    public:
       int size;
       Vector2 pos;
    };

    player P1;
    P1.pos = Vector2{450,490};
    P1.size = 20;

    InitWindow(screenWidth, screenHeight, "70708");

    SetTargetFPS(60); 

    while (!WindowShouldClose()) {

        if (IsKeyDown(KEY_LEFT)) {
            P1.pos += Vector2{-160,0} / 60;
        }

        if (IsKeyDown(KEY_RIGHT)) {
            P1.pos += Vector2{160,0} / 60;
        }

        if (IsKeyDown(KEY_UP)) {
            P1.pos += Vector2{0,-160} / 60;
        }

        if (IsKeyDown(KEY_DOWN)) {
            P1.pos += Vector2{0,160} / 60;
        }

        if (P1.pos.x >= screenWidth/2 - 140 + 280 - P1.size) {
            P1.pos.x = screenWidth/2 - 140 + 280 - 1;
        } else if (P1.pos.x <= screenWidth/2 - 140 - P1.size) {
            P1.pos.x = screenWidth/2 - 140;
        }

        if (P1.pos.y >= screenHeight/2 + 10 + 280 - P1.size) {
            P1.pos.y = screenHeight/2 + 10 + 280;
        } else if (P1.pos.y <= screenHeight/2 + 10 - P1.size) {
            P1.pos.y = P1.pos.y - 1;
        }

        DrawFPS(0,0);

        BeginDrawing();
            ClearBackground(BLACK);
            DrawRectangle(screenWidth/2 - 150, screenHeight/2, 300, 300, RED);
            DrawRectangle(screenWidth/2 - 140, screenHeight/2 + 10, 280, 280, BLACK);
            DrawCircle(P1.pos.x, P1.pos.y, P1.size, WHITE);
        EndDrawing();
    }
    return 0;
}