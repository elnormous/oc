// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdlib.h>
#include "core/macos/ocenginemacos.h"

int main(int argc, char* argv[])
{
    OcEngineMacOS* oc_engine_macos = malloc(sizeof(OcEngineMacOS));

    if (!oc_engine_macos_init(oc_engine_macos, argc, argv))
    {
        oc_engine_macos_free(oc_engine_macos);
        return EXIT_FAILURE;
    }

    return oc_engine_macos_free(oc_engine_macos) ? EXIT_SUCCESS : EXIT_FAILURE;
}
