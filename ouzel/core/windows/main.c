// Copyright (C) 2018 Elviss Strazdins
// This file is part of the Ouzel engine.

#include <windows.h>
#include "core/ocengine.h"

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
    if (!oc_engine_init(NULL, NULL)) return EXIT_FAILURE;

    return oc_engine_free() ? EXIT_SUCCESS : EXIT_FAILURE;
}
