//----------------------------------------------------------------------------------------------------------
//     /$$$$$  /$$$$$$  /$$    /$$  /$$$$$$        /$$$$$$       /$$       /$$$$$$$$ /$$   /$$  /$$$$$$   //
//    |__  $$ /$$__  $$| $$   | $$ /$$__  $$      |_  $$_/      | $$      | $$_____/| $$  /$$/ /$$__  $$  //
//       | $$| $$  \ $$| $$   | $$| $$  \ $$        | $$        | $$      | $$      | $$ /$$/ | $$  \ $$  //
//       | $$| $$  | $$|  $$ / $$/| $$$$$$$$        | $$        | $$      | $$$$$   | $$$$$/  | $$$$$$$$  //
//  /$$  | $$| $$  | $$ \  $$ $$/ | $$__  $$        | $$        | $$      | $$__/   | $$  $$  | $$__  $$  //
// | $$  | $$| $$  | $$  \  $$$/  | $$  | $$        | $$        | $$      | $$      | $$\  $$ | $$  | $$  //
// |  $$$$$$/|  $$$$$$/   \  $/   | $$  | $$       /$$$$$$      | $$$$$$$$| $$$$$$$$| $$ \  $$| $$  | $$  //
//  \______/  \______/     \_/    |__/  |__/      |______/      |________/|________/|__/  \__/|__/  |__/  //
//----------------------------------------------------------------------------------------------------------

// ----- Includes -------------------------------------------------------------

#include "stm32f4xx_hal.h"
#include "BlinkLed.h"

// ----- Function declarations ----------------------------------

// EXTI15_10_IRQHandler_Config initialization
void EXTI15_10_IRQHandler_Config();

//
void HAL_GPIO_EXTI_Callback(uint16_t GPIO_Pin);

//
void EXTI15_10_IRQHandler(void);

// Button peripheral initialization
void ButtonInit();

//
void USART3_IRQHandler(void);

//
void TIM3_IRQHandler(void);

//
void HAL_UART_RxCpltCallback(UART_HandleTypeDef* UartHandle);

//
void HAL_UART_TxCpltCallback(UART_HandleTypeDef* UartHandle);

//
void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim);


