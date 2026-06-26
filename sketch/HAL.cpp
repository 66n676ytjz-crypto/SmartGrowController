{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 #include "HAL.h"\
\
void HAL::begin()\
\{\
    pinMode(PIN_RELAY, OUTPUT);\
    digitalWrite(PIN_RELAY, LOW);\
\
    pinMode(PIN_BUTTON, INPUT_PULLUP);\
    pinMode(PIN_BUZZER, OUTPUT);\
\
    pinMode(PIN_SOIL, INPUT);\
    pinMode(PIN_WATER, INPUT);\
    pinMode(PIN_LIGHT, INPUT);\
\}\
\
void HAL::setPump(bool on)\
\{\
    digitalWrite(PIN_RELAY, on ? HIGH : LOW);\
\}\
\
void HAL::beep(uint16_t frequency, uint16_t duration)\
\{\
    tone(PIN_BUZZER, frequency, duration);\
\}\
\
bool HAL::readButton()\
\{\
    return digitalRead(PIN_BUTTON) == LOW;\
\}\
\
int HAL::readSoil()\
\{\
    return analogRead(PIN_SOIL);\
\}\
\
int HAL::readWater()\
\{\
    return analogRead(PIN_WATER);\
\}\
\
int HAL::readLight()\
\{\
    return analogRead(PIN_LIGHT);\
\}}