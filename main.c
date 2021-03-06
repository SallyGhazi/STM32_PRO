/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * Copyright (c) 2022 STMicroelectronics.
  * All rights reserved.
  *
  * This software is licensed under terms that can be found in the LICENSE file
  * in the root directory of this software component.
  * If no LICENSE file comes with this software, it is provided AS-IS.
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"
#include "tim.h"
#include "gpio.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

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
void SystemClock_Config(void);
/* USER CODE BEGIN PFP */
///------------------CarGo-------------------
void CarGo(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 300);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 300);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
	
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
  
}
///------------------CarStop-------------------
void CarStop(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 900);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 900);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_SET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_SET);
  
  
}
///------------------CarLeftAround-------------------
void CarLeftAround(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 400);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 400);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_SET);
  
  
}
///------------------CarRightAround-------------------
void CarRightAround(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 400);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 400);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_SET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
}
///------------------CarBack-------------------
void CarBack(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 300);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 300);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_SET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_RESET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_SET);
  
}
///------------------CarLeft-------------------
void CarLeft(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 300);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 900);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
}
///------------------CarBigLeft-------------------
void CarBigLeft(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 100);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 900);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
}
//////////++++++++++++++++++++
///------------------CarRight-------------------
void CarRight(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 900);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 300);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
}
///------------------CarBigRight-------------------
void CarBigRight(void){  
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_2, 900);
   __HAL_TIM_SET_COMPARE (&htim3, TIM_CHANNEL_3, 100);
  
  HAL_GPIO_WritePin(GPIOA, A0_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A1_Pin, GPIO_PIN_RESET);
  
  HAL_GPIO_WritePin(GPIOA, A2_Pin, GPIO_PIN_SET);
  HAL_GPIO_WritePin(GPIOA, A3_Pin, GPIO_PIN_RESET);
  
}
/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */
int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  MX_TIM3_Init();
  /* USER CODE BEGIN 2 */
	HAL_TIM_Base_Start(&htim3); 
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_2);  
	HAL_TIM_PWM_Start(&htim3,TIM_CHANNEL_3);  

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
  while (1)
  {
    /* USER CODE END WHILE */

    /* USER CODE BEGIN 3 */
		CarGo();
		HAL_Delay(1000);
		
		CarStop();
		HAL_Delay(1000);

		CarLeftAround();
		HAL_Delay(1000);
		
		CarRightAround();
		HAL_Delay(1000);
		
		CarBack();
		HAL_Delay(1000);
		
		CarLeft();
		HAL_Delay(1000);
		
		CarBigLeft();
		HAL_Delay(1000);
		
		CarRight();
		HAL_Delay(1000);
		
		CarBigRight();
		HAL_Delay(1000);
		
		
		
		
		
	/*	
	__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_3,75);
	HAL_GPIO_WritePin(GPIOA,A0_Pin,GPIO_PIN_SET);   
  HAL_GPIO_WritePin(GPIOA,A1_Pin,GPIO_PIN_RESET);

 	__HAL_TIM_SET_COMPARE(&htim3,TIM_CHANNEL_2,50);
  HAL_GPIO_WritePin(GPIOA,A2_Pin,GPIO_PIN_SET);   
  HAL_GPIO_WritePin(GPIOA,A3_Pin,GPIO_PIN_RESET);*/

  }
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV16;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV16;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV16;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
  {
    Error_Handler();
  }
}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

