#include <iostream>
#include <raylib.h>

int main() {
    const int screenWidth = 950;
    const int screenHeight = 950;

    InitWindow(screenWidth, screenHeight, "70708");

    SetTargetFPS(60); 

    while (!WindowShouldClose()) {
        DrawFPS(0,0);

        BeginDrawing();
        ClearBackground(DARKGRAY);
        EndDrawing();
    }
    return 0;
}