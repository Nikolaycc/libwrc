#ifndef WC_UTILS_H
#define WC_UTILS_H

#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <stdint.h>
#include <stdarg.h>
#include <netinet/in.h>

#define MAX_TEXTFORMAT_BUFFERS 2048
#define MAX_TEXT_BUFFER_LENGTH 2048

#define TCP 6
#define UDP 17

char* wc_format(const char *text, ...);

#endif
