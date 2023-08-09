// log.h
#ifndef LOG_H
#define LOG_H

typedef enum {
    DEBUG,
    INFO,
    WARN,
    ERROR,
    FATAL
} log_level;

void log_msg(log_level, const char* msg);


#endif
