{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 /******************************************************************************\
 *\
 * Flora Core\
 * Task Manager\
 *\
 ******************************************************************************/\
\
#pragma once\
\
#include <Arduino.h>\
\
typedef void (*TaskCallback)();\
\
struct Task\
\{\
    TaskCallback callback = nullptr;\
    uint32_t interval = 1000;\
    uint32_t lastRun = 0;\
    bool enabled = true;\
\};\
\
class TaskManager\
\{\
public:\
\
    static constexpr uint8_t MAX_TASKS = 16;\
\
    void begin();\
\
    bool addTask(TaskCallback callback, uint32_t interval);\
\
    void update();\
\
private:\
\
    Task tasks[MAX_TASKS];\
\
    uint8_t taskCount = 0;\
\};}