#include <raylib.h>
#include "ball.h"

int main() 
{
    const Color darkGreen = {20, 160, 133, 255};
    
    constexpr int screenWidth = 800;
    constexpr int screenHeight = 600;
    
    Ball ball;
    
    InitWindow(screenWidth, screenHeight, "My first RAYLIB program!");
    SetTargetFPS(60);
    
    while (!WindowShouldClose())
    {
        ball.Update();
        
        BeginDrawing();
            ClearBackground(darkGreen);
            ball.Draw();

        // Get FPS value and draw it in a custom color
        int fps = GetFPS();  
        DrawText(TextFormat("FPS: %d", fps), 10, 10, 20, WHITE); 

        EndDrawing();
    }
    
    CloseWindow();
}