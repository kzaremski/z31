/*******************************************************************************************
*
*   raylib [core] example - Basic window
*
*   Welcome to raylib!
*
*   To test examples, just press F6 and execute raylib_compile_execute script
*   Note that compiled executable is placed in the same folder as .c file
*
*   You can find all basic examples on C:\raylib\raylib\examples folder or
*   raylib official webpage: www.raylib.com
*
*   Enjoy using raylib. :)
*
*   Example originally created with raylib 1.0, last time updated with raylib 1.0
*
*   Example licensed under an unmodified zlib/libpng license, which is an OSI-certified,
*   BSD-like license that allows static linking with closed source software
*
*   Copyright (c) 2013-2024 Ramon Santamaria (@raysan5)
*
********************************************************************************************/

#include "raylib.h"

int main(void) {
    // ** Initialization
    const int screenWidth = 1920;
    const int screenHeight = 480;
    
    // Init window with sizes
    SetConfigFlags(FLAG_MSAA_4X_HINT | FLAG_WINDOW_ALWAYS_RUN | FLAG_WINDOW_HIGHDPI);
    InitWindow(screenWidth, screenHeight, "Digital Dashboard");
    
    // Load fonts
    Font fontTtf = LoadFontEx("Michroma-Regular.ttf", 128, 0, 250);
    Color DigiDashColor = (Color){3, 252, 140, 255};

    SetTargetFPS(60);

    // Main Loop
    while (!WindowShouldClose()) { // WindowShouldClose detects close button and esc key
        BeginDrawing();
        
        ClearBackground(BLACK);
        DrawTextEx(fontTtf, "0 MPH", (Vector2){ 20.0f, 100.0f }, (float)fontTtf.baseSize, 2, DigiDashColor);
        
        EndDrawing();
    }

    UnloadFont(fontTtf);

    // ** Deinitialization
    // Close window and OpenGL context
    CloseWindow();

    return 0;
}