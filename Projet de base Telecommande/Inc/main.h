/**
  ******************************************************************************
  * @file           : main.h
  * @brief          : Header for main.c file.
  *                   This file contains the common defines of the application.
  ******************************************************************************
  ** This notice applies to any and all portions of this file
  * that are not between comment pairs USER CODE BEGIN and
  * USER CODE END. Other portions of this file, whether 
  * inserted by the user or by software development tools
  * are owned by their respective copyright owners.
  *
  * COPYRIGHT(c) 2019 STMicroelectronics
  *
  * Redistribution and use in source and binary forms, with or without modification,
  * are permitted provided that the following conditions are met:
  *   1. Redistributions of source code must retain the above copyright notice,
  *      this list of conditions and the following disclaimer.
  *   2. Redistributions in binary form must reproduce the above copyright notice,
  *      this list of conditions and the following disclaimer in the documentation
  *      and/or other materials provided with the distribution.
  *   3. Neither the name of STMicroelectronics nor the names of its contributors
  *      may be used to endorse or promote products derived from this software
  *      without specific prior written permission.
  *
  * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
  * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
  * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
  * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
  * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
  * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
  * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
  * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
  * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
  * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
  *
  ******************************************************************************
  */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef __MAIN_H__
#define __MAIN_H__

/* Includes ------------------------------------------------------------------*/

/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private define ------------------------------------------------------------*/

#define joystick_x_Pin GPIO_PIN_0
#define joystick_x_GPIO_Port GPIOC
#define joystick_y_Pin GPIO_PIN_1
#define joystick_y_GPIO_Port GPIOC
#define Accel_x_Pin GPIO_PIN_0
#define Accel_x_GPIO_Port GPIOA
#define Accel_y_Pin GPIO_PIN_1
#define Accel_y_GPIO_Port GPIOA
#define btn2_Pin GPIO_PIN_2
#define btn2_GPIO_Port GPIOA
#define btn1_Pin GPIO_PIN_3
#define btn1_GPIO_Port GPIOA
#define UART_debug_TX_Pin GPIO_PIN_4
#define UART_debug_TX_GPIO_Port GPIOC
#define UART_debug_RX_Pin GPIO_PIN_5
#define UART_debug_RX_GPIO_Port GPIOC
#define Accel_z_Pin GPIO_PIN_0
#define Accel_z_GPIO_Port GPIOB
#define led1_Pin GPIO_PIN_6
#define led1_GPIO_Port GPIOC
#define led2_Pin GPIO_PIN_8
#define led2_GPIO_Port GPIOC
#define led3_Pin GPIO_PIN_9
#define led3_GPIO_Port GPIOC
#define UART_plateau_TX_Pin GPIO_PIN_9
#define UART_plateau_TX_GPIO_Port GPIOA
#define btn3_Pin GPIO_PIN_10
#define btn3_GPIO_Port GPIOA
#define PASS_FOR_GND_PCB_Pin GPIO_PIN_14
#define PASS_FOR_GND_PCB_GPIO_Port GPIOA
#define PASS_FOR_5v_PCB_Pin GPIO_PIN_15
#define PASS_FOR_5v_PCB_GPIO_Port GPIOA
#define Bluetooth_TX_Pin GPIO_PIN_10
#define Bluetooth_TX_GPIO_Port GPIOC
#define Bluetooth_RX_Pin GPIO_PIN_11
#define Bluetooth_RX_GPIO_Port GPIOC
#define btn4_Pin GPIO_PIN_3
#define btn4_GPIO_Port GPIOB
#define SPI1_CS_Pin GPIO_PIN_6
#define SPI1_CS_GPIO_Port GPIOB
#define UART_plateau_RX_Pin GPIO_PIN_7
#define UART_plateau_RX_GPIO_Port GPIOB

/* ########################## Assert Selection ############################## */
/**
  * @brief Uncomment the line below to expanse the "assert_param" macro in the 
  *        HAL drivers code
  */
/* #define USE_FULL_ASSERT    1U */

/* USER CODE BEGIN Private defines */

/* USER CODE END Private defines */

#ifdef __cplusplus
 extern "C" {
#endif
void _Error_Handler(char *, int);

#define Error_Handler() _Error_Handler(__FILE__, __LINE__)
#ifdef __cplusplus
}
#endif

#endif /* __MAIN_H__ */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
