{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include "TaskManager.h"\
\
void TaskManager::begin()\
\{\
    taskCount = 0;\
\}\
\
bool TaskManager::addTask(TaskCallback callback,\
                          uint32_t interval)\
\{\
    if(taskCount >= MAX_TASKS)\
        return false;\
\
    tasks[taskCount].callback = callback;\
    tasks[taskCount].interval = interval;\
    tasks[taskCount].lastRun = millis();\
\
    taskCount++;\
\
    return true;\
\}\
\
void TaskManager::update()\
\{\
    uint32_t now = millis();\
\
    for(uint8_t i=0;i<taskCount;i++)\
    \{\
        if(!tasks[i].enabled)\
            continue;\
\
        if(now - tasks[i].lastRun >= tasks[i].interval)\
        \{\
            tasks[i].lastRun = now;\
\
            tasks[i].callback();\
        \}\
    \}\
\}}
