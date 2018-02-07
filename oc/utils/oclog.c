// Copyright (C) 2018 Elviss Strazdins
// This file is part of the OC engine.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>

#if _WIN32
#include <windows.h>
#include <strsafe.h>
#endif

#include "oclog.h"

void oc_log(OcLogLevel log_level, const char* format, ...)
{
#if DEBUG
    va_list vl;
    char* str;
    FILE* f = stdout;
    int n;
    const int init_size = 32;
#if _WIN32
    wchar_t* sz_buffer;
#endif

    switch (log_level)
    {
        case ERR:
        case WARN:
            f = stderr;
            break;
        case INFO:
        case ALL:
            f = stdout;
            break;
        default:
            break;
    }

    str = malloc(init_size);

    va_start(vl, format);
    n = vsnprintf(str, init_size - 1, format, vl);
    va_end(vl);

    if (n < 0) return;

    if (n + 2 > init_size)
    {
        str = realloc(str, (size_t)n + 2);

        va_start(vl, format);
        vsnprintf(str, (size_t)n + 1, format, vl);
        va_end(vl);
    }

    strcat(str, "\n");

    fprintf(f, "%s", str);

#if _WIN32
    sz_buffer = malloc((n + 2) * sizeof(wchar_t));
    if (MultiByteToWideChar(CP_UTF8, 0, str, -1, sz_buffer, n + 2) == 0)
    {
        return;
    }

    OutputDebugStringW(sz_buffer);
    free(sz_buffer);
#endif
    free(str);
#endif
}
