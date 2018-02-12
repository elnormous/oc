// Copyright (C) 2018 Elviss Strazdins
// This file is part of the Ouzel engine.

#include <windows.h>
#include "core/ocengine.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (!ocEngineInit(NULL, NULL)) return EXIT_FAILURE;

    return ocEngineFree() ? EXIT_SUCCESS : EXIT_FAILURE;
}
