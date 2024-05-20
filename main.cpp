#include <iostream>
#include <raylib.h>
#include "TcpSocket.hpp"

#define WIDTH 800
#define HEIGHT 640
#define TITLE "Tic Tac Toe Online"


int main() {
    InitWindow(WIDTH, HEIGHT, TITLE);
    SetTargetFPS(60);
    Camera2D cam = {0};
    cam.offset = {WIDTH/2.0f, HEIGHT/2.0f};
    cam.zoom = 1.0f;

    while(!WindowShouldClose()) {
        BeginDrawing();
            BeginMode2D(cam);
                ClearBackground(BLACK);
            EndMode2D();
        EndDrawing();
    }

    CloseWindow();
    return 0;
}
