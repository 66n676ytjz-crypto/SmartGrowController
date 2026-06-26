{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include "Config.h"\
#include "GrowData.h"\
#include "HAL.h"\
\
HAL hal;\
GrowData grow;\
\
void setup()\
\{\
    Serial.begin(SERIAL_BAUD);\
\
    hal.begin();\
\
    DEBUG_PRINTLN("==================================");\
    DEBUG_PRINTLN("Flora Core");\
    DEBUG_PRINTLN(FLORA_VERSION);\
    DEBUG_PRINTLN("Hardware Initialized");\
    DEBUG_PRINTLN("==================================");\
\}\
\
void loop()\
\{\
    // Managers will be added in the next commit.\
\}}