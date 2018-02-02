// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdlib.h>
#include "ocengine.h"

void ouzel_main(int argc, char** argv);

struct OcEngine* oc_engine;

int oc_engine_init(int argc, char* argv[])
{
    oc_engine = malloc(sizeof(OcEngine));

    ouzel_main(argc, argv);

    return 1;
}

int oc_engine_free(void)
{
    if (!oc_engine) return 0;

    free(oc_engine);

    return 1;
}
