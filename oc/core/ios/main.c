// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdlib.h>
#include "core/ocengine.h"

int main(int argc, char* argv[])
{
    if (!oc_engine_init(argc, argv)) return EXIT_FAILURE;

    return oc_engine_free() ? EXIT_SUCCESS : EXIT_FAILURE;
}
