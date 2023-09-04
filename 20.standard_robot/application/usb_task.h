/**
  ****************************(C) COPYRIGHT 2019 DJI****************************
  * @file       usb_task.c/h
  * @brief      no action.
  * @note       
  * @history
  *  Version    Date            Author          Modification
  *  V1.0.0     Dec-26-2018     RM              1. done
  *
  @verbatim
  ==============================================================================

  ==============================================================================
  @endverbatim
  ****************************(C) COPYRIGHT 2019 DJI****************************
  */
#ifndef USB_TASK_H
#define USB_TASK_H
#include "struct_typedef.h"
typedef struct __attribute__((packed))
{
    float data1;
    uint8_t data2;
    int16_t data3;
}transmit_packet_t;

typedef struct __attribute__((packed))
{
    float data1;
    uint8_t data2;
    int16_t data3;
}receive_packet_t;

typedef receive_packet_t target_data_t;

extern void usb_task(void const * argument);

#endif
