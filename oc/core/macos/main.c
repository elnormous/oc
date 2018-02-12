// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdlib.h>
#include "core/macos/ocenginemacos.h"

int main(int argc, char* argv[])
{
    OcEngineMacOS* ocEngineMacos = malloc(sizeof(OcEngineMacOS));

    if (!ocEngineMacOSInit(ocEngineMacos, argc, argv))
    {
        ocEngineMacOSFree(ocEngineMacos);
        return EXIT_FAILURE;
    }

    return ocEngineMacOSFree(ocEngineMacos) ? EXIT_SUCCESS : EXIT_FAILURE;
}
