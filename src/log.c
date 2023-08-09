// log.c
#include <log.h>
#include <stdio.h>
#include <time.h>

void log_msg(log_level ll, const char* msg) {
    printf("%s", msg);
}
