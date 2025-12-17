#include <variables.h> 

String Version = "Ver: 1.4 - 251104 Release"; // 固件版本号

bool temp_read_mutex = false; // 互斥锁，防止同时读取温度

bool Display_Type = true;             // true: IPS屏幕；false: TFT屏幕
bool Display_Type_Configured = false; // 是否已配置显示类型

bool Soldering_Enabled = false;

uint16_t SolderingTargetTemp = 100;
uint16_t SolderingTargetTempMin = 50;
uint16_t SolderingTargetTempMax = 400;
uint16_t SolderingStandbyTemp = 100;
uint16_t SolderingStandbyTime = 10; // Minutes

uint16_t SolderingMaxPower = 100; // Max power in percentage (0-100)

bool Heatgun_Enabled = false;

uint16_t HeatgunTargetTemp = 100;
uint16_t HeatgunTargetTempMin = 100;
uint16_t HeatgunTargetTempMax = 400;

uint16_t HeatgunWindSpeed = 50;
uint16_t HeatgunWindSpeedMin = 10;
uint16_t HeatgunWindSpeedMax = 100;

uint8_t Brightness;

bool Buzzer_Enabled = true;
bool CoolingFan_Enabled = true;

uint8_t Soldering_Status;
uint16_t Soldering_Temp;
float Soldering_DutyCycle;
uint8_t Heatgun_Status;
uint16_t Heatgun_Temp;
float Heatgun_DutyCycle;

//———— Soldering PID For Universual JBC245 ——————//

float Soldering_KP = 18.0f;
float Soldering_KI = 12.0f;
float Soldering_KD = 2.0f;

//———— Heatgun PID For Universual 858D ——————//

float Heatgun_KP = 58.0f;
float Heatgun_KI = 14.0f;
float Heatgun_KD = 20.0f;