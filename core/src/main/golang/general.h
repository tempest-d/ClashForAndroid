#pragma once

static const int MODE_DIRECT = 0;
static const int MODE_GLOBAL = 1;
static const int MODE_RULE = 2;

typedef struct general_t {
    int mode;
    int http_port;
    int socks_port;
    int redirect_port;
    int mixed_port;
} general_t;