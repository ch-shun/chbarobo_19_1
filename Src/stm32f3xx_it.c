/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file    stm32f3xx_it.c
  * @brief   Interrupt Service Routines.
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2019 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */

/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "stm32f3xx_it.h"
/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */
/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN TD */

/* USER CODE END TD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
 
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/
/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/* External variables --------------------------------------------------------*/

/* USER CODE BEGIN EV */

/* USER CODE END EV */

/******************************************************************************/
/*           Cortex-M4 Processor Interruption and Exception Handlers          */ 
/******************************************************************************/
/**
  * @brief This function handles Non maskable interrupt.
  */
void NMI_Handler(void)
{
  /* USER CODE BEGIN NonMaskableInt_IRQn 0 */

  /* USER CODE END NonMaskableInt_IRQn 0 */
  /* USER CODE BEGIN NonMaskableInt_IRQn 1 */

  /* USER CODE END NonMaskableInt_IRQn 1 */
}

/**
  * @brief This function handles Hard fault interrupt.
  */
void HardFault_Handler(void)
{
  /* USER CODE BEGIN HardFault_IRQn 0 */

  /* USER CODE END HardFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_HardFault_IRQn 0 */
    /* USER CODE END W1_HardFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Memory management fault.
  */
void MemManage_Handler(void)
{
  /* USER CODE BEGIN MemoryManagement_IRQn 0 */

  /* USER CODE END MemoryManagement_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_MemoryManagement_IRQn 0 */
    /* USER CODE END W1_MemoryManagement_IRQn 0 */
  }
}

/**
  * @brief This function handles Pre-fetch fault, memory access fault.
  */
void BusFault_Handler(void)
{
  /* USER CODE BEGIN BusFault_IRQn 0 */

  /* USER CODE END BusFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_BusFault_IRQn 0 */
    /* USER CODE END W1_BusFault_IRQn 0 */
  }
}

/**
  * @brief This function handles Undefined instruction or illegal state.
  */
void UsageFault_Handler(void)
{
  /* USER CODE BEGIN UsageFault_IRQn 0 */

  /* USER CODE END UsageFault_IRQn 0 */
  while (1)
  {
    /* USER CODE BEGIN W1_UsageFault_IRQn 0 */
    /* USER CODE END W1_UsageFault_IRQn 0 */
  }
}

/**
  * @brief This function handles System service call via SWI instruction.
  */
void SVC_Handler(void)
{
  /* USER CODE BEGIN SVCall_IRQn 0 */

  /* USER CODE END SVCall_IRQn 0 */
  /* USER CODE BEGIN SVCall_IRQn 1 */

  /* USER CODE END SVCall_IRQn 1 */
}

/**
  * @brief This function handles Debug monitor.
  */
void DebugMon_Handler(void)
{
  /* USER CODE BEGIN DebugMonitor_IRQn 0 */

  /* USER CODE END DebugMonitor_IRQn 0 */
  /* USER CODE BEGIN DebugMonitor_IRQn 1 */

  /* USER CODE END DebugMonitor_IRQn 1 */
}

/**
  * @brief This function handles Pendable request for system service.
  */
void PendSV_Handler(void)
{
  /* USER CODE BEGIN PendSV_IRQn 0 */

  /* USER CODE END PendSV_IRQn 0 */
  /* USER CODE BEGIN PendSV_IRQn 1 */

  /* USER CODE END PendSV_IRQn 1 */
}

/**
  * @brief This function handles System tick timer.
  */
void SysTick_Handler(void)
{
  /* USER CODE BEGIN SysTick_IRQn 0 */

  /* USER CODE END SysTick_IRQn 0 */
  HAL_IncTick();
  /* USER CODE BEGIN SysTick_IRQn 1 */

  /* USER CODE END SysTick_IRQn 1 */
}

/******************************************************************************/
/* STM32F3xx Peripheral Interrupt Handlers                                    */
/* Add here the Interrupt Handlers for the used peripherals.                  */
/* For the available peripheral interrupt handler names,                      */
/* please refer to the startup file (startup_stm32f3xx.s).                    */
/******************************************************************************/

/**
  * @brief This function handles EXTI line[9:5] interrupts.
  */
void EXTI9_5_IRQHandler(void)
{
  /* USER CODE BEGIN EXTI9_5_IRQn 0 */

  /* USER CODE END EXTI9_5_IRQn 0 */
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_5);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_6);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_7);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_8);
  HAL_GPIO_EXTI_IRQHandler(GPIO_PIN_9);
  /* USER CODE BEGIN EXTI9_5_IRQn 1 */

	
  if((EXTI->PR & EXTI_PR_PR5) != 0){
   EXTI->PR |= EXTI_PR_PR5;

    //If PA12 Pin is high , into Auto section
/*
  	if((GPIOA->IDR & GPIO_IDR_12 ) != 0){
  	    //Go???��?��??��?��?Straight

	    GPIOB->BSRR = GPIO_BSRR_BS_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

        GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BS_5;
	    GPIOA->BSRR = GPIO_BSRR_BS_4;


    	TIM2->CCR1=500;

    	for(i=2; i<71; i++){
	    	HAL_Delay(5);
	    	TIM2->PSC = (700 / i);
    	}

    	TIM2->PSC = 9;

    	HAL_Delay(1000);// go straight time

    	TIM2->PSC = 699;
		TIM2->CCR1=0;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;
	    //end go straight

	    //shot radition highest
	    GPIOB->BSRR = GPIO_BSRR_BS_0;
	    GPIOB->BSRR = GPIO_BSRR_BR_1;

	    GPIOA->BSRR = GPIO_BSRR_BR_3;

    	TIM2->CCR1=500;

        HAL_Delay(3000); //rise time

		TIM2->CCR1=0;

	    //end set highest rad

		//start set medium rad
	    GPIOB->BSRR = GPIO_BSRR_BS_0;
	    GPIOB->BSRR = GPIO_BSRR_BR_1;

	    GPIOA->BSRR = GPIO_BSRR_BS_3;
    	TIM2->CCR1=500;

        HAL_Delay(1000); //down time

		TIM2->CCR1=0;

        //end down rad medium

        //down rad lowest
	    GPIOB->BSRR = GPIO_BSRR_BS_0;
	    GPIOB->BSRR = GPIO_BSRR_BR_1;

	    GPIOA->BSRR = GPIO_BSRR_BS_3;
    	TIM2->CCR1=500;

    	HAL_Delay(1000);

		TIM2->CCR1=0;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;
	    //end set lowest rad

  	} else {
*/

	    GPIOB->BSRR = GPIO_BSRR_BS_0;
	    GPIOB->BSRR = GPIO_BSRR_BR_1;

	    GPIOA->BSRR = GPIO_BSRR_BR_3;

    	TIM2->CCR1=500;

    	for(i=2; i<71; i++){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    	HAL_Delay(5);
	    	TIM2->PSC = (700 / i);
    	}

    	TIM2->PSC = 9;

	    while(1){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    }

		TIM2->CCR1=0;
    	TIM2->PSC = 699;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3; 
//    }	  

  }

  if((EXTI->PR & EXTI_PR_PR6) != 0){

	    EXTI->PR |= EXTI_PR_PR6;


	    GPIOB->BSRR = GPIO_BSRR_BS_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    if((GPIOB->IDR & GPIO_IDR_4 ) != 0){

		    GPIOA->BSRR = GPIO_BSRR_BR_7;
		    GPIOA->BSRR = GPIO_BSRR_BR_6;
		    GPIOA->BSRR = GPIO_BSRR_BR_5;
		    GPIOA->BSRR = GPIO_BSRR_BR_4;

	    } else {
		    GPIOA->BSRR = GPIO_BSRR_BS_7;
		    GPIOA->BSRR = GPIO_BSRR_BS_6;
		    GPIOA->BSRR = GPIO_BSRR_BS_5;
		    GPIOA->BSRR = GPIO_BSRR_BS_4;
	    }

    	TIM2->CCR1=500;

    	for(i=2; i<71; i++){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    	HAL_Delay(5);
	    	TIM2->PSC = (700 / i);
    	}

    	TIM2->PSC = 9;

	    while(1){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) = 0){
	    		break;
	    	}
	    }

	  HAL_Delay(3000);
	  
    	TIM2->PSC = 699;
		TIM2->CCR1=0;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;

  }

  if((EXTI->PR & EXTI_PR_PR7) != 0){

	    EXTI->PR |= EXTI_PR_PR7;

	    GPIOB->BSRR = GPIO_BSRR_BS_0;
	    GPIOB->BSRR = GPIO_BSRR_BR_1;

	    GPIOA->BSRR = GPIO_BSRR_BS_3;

            TIM2->CCR1=5000;

	    while(1){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    }

	    TIM2->CCR1=0;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;

  }

  if((EXTI->PR & EXTI_PR_PR8) != 0){
	    EXTI->PR |= EXTI_PR_PR8;

	    GPIOB->BSRR = GPIO_BSRR_BS_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    if((GPIOB->IDR & GPIO_IDR_4 ) != 0){
		    GPIOA->BSRR = GPIO_BSRR_BR_7;
		    GPIOA->BSRR = GPIO_BSRR_BS_6;
		    GPIOA->BSRR = GPIO_BSRR_BR_5;
		    GPIOA->BSRR = GPIO_BSRR_BS_4;
	    } else {
		    GPIOA->BSRR = GPIO_BSRR_BS_7;
		    GPIOA->BSRR = GPIO_BSRR_BR_6;
		    GPIOA->BSRR = GPIO_BSRR_BS_5;
		    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    }


   	TIM2->CCR1=500;

    	for(i=2; i<71; i++){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    	HAL_Delay(5);
	    	TIM2->PSC = (700 / i);
    	}

    	TIM2->PSC = 9;

	    while(1){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    }

    	TIM2->PSC = 699;
		TIM2->CCR1=0;

	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;
  }

  if((EXTI->PR & EXTI_PR_PR9) != 0){

	    EXTI->PR |= EXTI_PR_PR9;

	    GPIOB->BSRR = GPIO_BSRR_BS_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    if((GPIOB->IDR & GPIO_IDR_4 ) != 0){
		    GPIOA->BSRR = GPIO_BSRR_BR_7;
		    GPIOA->BSRR = GPIO_BSRR_BR_6;
		    GPIOA->BSRR = GPIO_BSRR_BS_5;
		    GPIOA->BSRR = GPIO_BSRR_BS_4;
	    } else {
		    GPIOA->BSRR = GPIO_BSRR_BS_7;
		    GPIOA->BSRR = GPIO_BSRR_BS_6;
		    GPIOA->BSRR = GPIO_BSRR_BR_5;
		    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    }

   	TIM2->CCR1=500;

    	for(i=2; i<71; i++){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    	HAL_Delay(5);
	    	TIM2->PSC = (700 / i);
    	}

    	TIM2->PSC = 9;

	    while(1){
	    	if((GPIOA->IDR & GPIO_IDR_10 ) == 0){
	    		break;
	    	}
	    }

    	TIM2->PSC = 699;
		TIM2->CCR1=0;


	    GPIOB->BSRR = GPIO_BSRR_BR_1;
	    GPIOB->BSRR = GPIO_BSRR_BR_0;

	    GPIOA->BSRR = GPIO_BSRR_BR_7;
	    GPIOA->BSRR = GPIO_BSRR_BR_6;
	    GPIOA->BSRR = GPIO_BSRR_BR_5;
	    GPIOA->BSRR = GPIO_BSRR_BR_4;
	    GPIOA->BSRR = GPIO_BSRR_BR_3;
  }
  /* USER CODE END EXTI9_5_IRQn 1 */
}

/* USER CODE BEGIN 1 */

/* USER CODE END 1 */
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
