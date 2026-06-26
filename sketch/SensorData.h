{\rtf1\ansi\ansicpg1252\cocoartf2822
\cocoatextscaling0\cocoaplatform0{\fonttbl\f0\fswiss\fcharset0 Helvetica;}
{\colortbl;\red255\green255\blue255;}
{\*\expandedcolortbl;;}
\margl1440\margr1440\vieww11520\viewh8400\viewkind0
\pard\tx720\tx1440\tx2160\tx2880\tx3600\tx4320\tx5040\tx5760\tx6480\tx7200\tx7920\tx8640\pardirnatural\partightenfactor0

\f0\fs24 \cf0 struct SensorData\
\{\
    // Environment\
    float temperatureF = 0.0f;\
    float humidity = 0.0f;\
\
    // Raw ADC Values\
    uint16_t soilRaw = 0;\
    uint16_t waterRaw = 0;\
    uint16_t lightRaw = 0;\
\
    // Processed Values\
    uint8_t soilPercent = 0;\
    uint8_t tankPercent = 0;\
\
    // Calibration\
    uint16_t soilDry = SOIL_DRY_DEFAULT;\
    uint16_t soilWet = SOIL_WET_DEFAULT;\
    uint16_t waterLow = WATER_LOW_DEFAULT;\
\
    bool valid = false;\
\};}