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

void ocLog(OcLogLevel logLevel, const char* format, ...)
{
#if DEBUG
    va_list vl;
    char* str;
    FILE* f = stdout;
    int n;
    const int initSize = 32;
#if _WIN32
    wchar_t* szBuffer;
#endif

    switch (logLevel)
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

    str = malloc(initSize);

    va_start(vl, format);
    n = vsnprintf(str, initSize - 1, format, vl);
    va_end(vl);

    if (n < 0) return;

    if (n + 2 > initSize)
    {
        str = realloc(str, (size_t)n + 2);

        va_start(vl, format);
        vsnprintf(str, (size_t)n + 1, format, vl);
        va_end(vl);
    }

    strcat(str, "\n");

    fprintf(f, "%s", str);

#if _WIN32
    szBuffer = malloc((n + 2) * sizeof(wchar_t));
    if (MultiByteToWideChar(CP_UTF8, 0, str, -1, szBuffer, n + 2) == 0)
    {
        return;
    }

    OutputDebugStringW(szBuffer);
    free(szBuffer);
#endif
    free(str);
#endif
}
