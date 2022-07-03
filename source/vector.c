int main(void);

extern unsigned int __stack;

void __reset_handler(void) {
    main();
}
void __blocking_handler(void) { while (1); }
static void null_handler(void) {}

void Reset_Handler() __attribute__ ((weak, alias ("__reset_handler")));
void NMI_Handler() __attribute__ ((weak, alias ("null_handler")));
void HardFault_Handler() __attribute__ ((weak, alias ("__blocking_handler")));
void MemManage_Handler() __attribute__ ((weak, alias ("__blocking_handler")));
void BusFault_Handler() __attribute__ ((weak, alias ("__blocking_handler")));
void UsageFault_Handler() __attribute__ ((weak, alias ("__blocking_handler")));
void SVC_Handler() __attribute__ ((weak, alias ("null_handler")));
void Debug_Handler() __attribute__ ((weak, alias ("null_handler")));
void PendSV_Handler() __attribute__ ((weak, alias ("null_handler")));
void SysTick_Handler() __attribute__ ((weak, alias ("null_handler")));

void WWDG_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void PVD_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TAMP_STAMP_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void RTC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FLASH_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void RCC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel6_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void ADC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FDCAN1_IT0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FDCAN2_IT0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FDCAN1_IT1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FDCAN2_IT1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI9_5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM1_BRK_TIM9_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM1_UP_TIM10_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM1_TRG_COM_TIM11_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM1_CC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C1_EV_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C1_ER_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C2_EV_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C2_ER_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void USART1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void USART2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void USART3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void EXTI15_10_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void RTC_ALARM_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM8_BRK_TIM12_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM8_UP_TIM13_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM8_TRG_COM_TIM14_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM8_CC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA1_Channel7_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FMC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SDMMC1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void UART4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void UART5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM6_DAC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM7_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void ETH_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void ETH_WKUP_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FDCAN_CAL_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel6_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2_Channel7_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void USART6_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C3_EV_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C3_ER_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_HS_EP1_OUT_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_HS_EP1_IN_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_HS_WKUP_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_HS_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DCMI_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void RNG_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void FPU_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void UART7_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void UART8_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPI6_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SAI1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LTDC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LTDC_ER_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMA2D_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SAI2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void QUADSPI_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPTIM1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void CEC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C4_EV_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void I2C4_ER_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SPDIF_RX_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_FS_EP1_OUT_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_FS_EP1_IN_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_FS_WKUP_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void OTG_FS_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMAMUX1_OVR_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_Master_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_TIMA_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_TIMB_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_TIMC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_TIMD_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_TIME_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HRTIM1_FLT_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DFSDM1_FLT0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DFSDM1_FLT1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DFSDM1_FLT2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DFSDM1_FLT3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SAI3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SWPMI1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM15_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM16_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void TIM17_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void MDIOS_WKUP_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void MDIOS_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void JPEG_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void MDMA_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SDMMC2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void HSEM1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void ADC3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void DMAMUX2_OVR_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel0_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel6_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void BDMA_Channel7_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void COMP1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPTIM2_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPTIM3_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPTIM4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPTIM5_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void LPUART1_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void CRS_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void ECC_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void SAI4_IRQHandler() __attribute__ ((weak, alias ("null_handler")));
void WAKEUP_PIN_IRQHandler() __attribute__ ((weak, alias ("null_handler")));



// The following section is taken from the datasheet of the MCU
__attribute__ ((section(".vectors")))
struct {
    unsigned int* initial_sp_value; // 0x00
    void (*reset)(void); // 0x04
    void (*nmi)(void); // 0x08
    void (*hard_fault)(void); // 0x0C
    void (*mem_fault)(void); // 0x10
    void (*bus_fault)(void); // 0x14
    void (*usage_fault)(void); // 0x18
    void (*reserved_0x001C[4])(void); // 0x1C
    void (*sv_call)(void); // 0x2C
    void (*debug_call)(void); // 0x30
    void (*reserved_0x0034[1])(void); // 0x34
    void (*pend_sv)(void); // 0x38
    void (*systick)(void); // 0x3C
    void (*irq[152])(void); // 0x40
} vector_table = {
    .initial_sp_value = &__stack,
    .reset = Reset_Handler,
    .nmi = NMI_Handler,
    .hard_fault = HardFault_Handler,
    .mem_fault = MemManage_Handler,
    .bus_fault = BusFault_Handler,
    .usage_fault = UsageFault_Handler,
    .sv_call = SVC_Handler,
    .debug_call = Debug_Handler,
    .pend_sv = PendSV_Handler,
    .systick = SysTick_Handler,
    .irq = {
        [0] = WWDG_IRQHandler,
        [1] = PVD_IRQHandler,
        [2] = TAMP_STAMP_IRQHandler,
        [3] = RTC_IRQHandler,
        [4] = FLASH_IRQHandler,
        [5] = RCC_IRQHandler,
        [6] = EXTI0_IRQHandler,
        [7] = EXTI1_IRQHandler,
        [8] = EXTI2_IRQHandler,
        [9] = EXTI3_IRQHandler,
        [10] = EXTI4_IRQHandler,
        [11] = DMA1_Channel0_IRQHandler,
        [12] = DMA1_Channel1_IRQHandler,
        [13] = DMA1_Channel2_IRQHandler,
        [14] = DMA1_Channel3_IRQHandler,
        [15] = DMA1_Channel4_IRQHandler,
        [16] = DMA1_Channel5_IRQHandler,
        [17] = DMA1_Channel6_IRQHandler,
        [18] = ADC_IRQHandler,
        [19] = FDCAN1_IT0_IRQHandler,
        [20] = FDCAN2_IT0_IRQHandler,
        [21] = FDCAN1_IT1_IRQHandler,
        [22] = FDCAN2_IT1_IRQHandler,
        [23] = EXTI9_5_IRQHandler,
        [24] = TIM1_BRK_TIM9_IRQHandler,
        [25] = TIM1_UP_TIM10_IRQHandler,
        [26] = TIM1_TRG_COM_TIM11_IRQHandler,
        [27] = TIM1_CC_IRQHandler,
        [28] = TIM2_IRQHandler,
        [29] = TIM3_IRQHandler,
        [30] = TIM4_IRQHandler,
        [31] = I2C1_EV_IRQHandler,
        [32] = I2C1_ER_IRQHandler,
        [33] = I2C2_EV_IRQHandler,
        [34] = I2C2_ER_IRQHandler,
        [35] = SPI1_IRQHandler,
        [36] = SPI2_IRQHandler,
        [37] = USART1_IRQHandler,
        [38] = USART2_IRQHandler,
        [40] = EXTI15_10_IRQHandler,
        [41] = RTC_ALARM_IRQHandler,
        [43] = TIM8_BRK_TIM12_IRQHandler,
        [44] = TIM8_UP_TIM13_IRQHandler,
        [45] = TIM8_TRG_COM_TIM14_IRQHandler,
        [46] = TIM8_CC_IRQHandler,
        [47] = DMA1_Channel7_IRQHandler,
        [48] = FMC_IRQHandler,
        [49] = SDMMC1_IRQHandler,
        [50] = TIM5_IRQHandler,
        [51] = SPI3_IRQHandler,
        [52] = UART4_IRQHandler,
        [53] = UART5_IRQHandler,
        [54] = TIM6_DAC_IRQHandler,
        [55] = TIM7_IRQHandler,
        [56] = DMA2_Channel0_IRQHandler,
        [57] = DMA2_Channel1_IRQHandler,
        [58] = DMA2_Channel2_IRQHandler,
        [59] = DMA2_Channel3_IRQHandler,
        [60] = DMA2_Channel4_IRQHandler,
        [61] = ETH_IRQHandler,
        [62] = ETH_WKUP_IRQHandler,
        [63] = FDCAN_CAL_IRQHandler,
//        [64] = 0                                 /* Reserved                     */
//        [65] = 0                                 /* Reserved                     */
//        [66] = 0                                 /* Reserved                     */
//        [67] = 0                                 /* Reserved                     */
        [68] = DMA2_Channel5_IRQHandler,
        [69] = DMA2_Channel6_IRQHandler,
        [70] = DMA2_Channel7_IRQHandler,
        [71] = USART6_IRQHandler,
        [72] = I2C3_EV_IRQHandler,
        [73] = I2C3_ER_IRQHandler,
        [74] = OTG_HS_EP1_OUT_IRQHandler,
        [75] = OTG_HS_EP1_IN_IRQHandler,
        [76] = OTG_HS_WKUP_IRQHandler,
        [77] = OTG_HS_IRQHandler,
        [78] = DCMI_IRQHandler,
//        [79] = 0                                 /* Reserved                     */
        [80] = RNG_IRQHandler,
        [81] = FPU_IRQHandler,
        [82] = UART7_IRQHandler,
        [83] = UART8_IRQHandler,
        [84] = SPI4_IRQHandler,
        [85] = SPI5_IRQHandler,
        [86] = SPI6_IRQHandler,
        [87] = SAI1_IRQHandler,
        [88] = LTDC_IRQHandler,
        [89] = LTDC_ER_IRQHandler,
        [90] = DMA2D_IRQHandler,
        [91] = SAI2_IRQHandler,
        [92] = QUADSPI_IRQHandler,
        [93] = LPTIM1_IRQHandler,
        [94] = CEC_IRQHandler,
        [95] = I2C4_EV_IRQHandler,
        [96] = I2C4_ER_IRQHandler,
        [97] = SPDIF_RX_IRQHandler,
        [98] = OTG_FS_EP1_OUT_IRQHandler,
        [99] = OTG_FS_EP1_IN_IRQHandler,
        [100] = OTG_FS_WKUP_IRQHandler,
        [101] = OTG_FS_IRQHandler,
        [102] = DMAMUX1_OVR_IRQHandler,
        [103] = HRTIM1_Master_IRQHandler,
        [104] = HRTIM1_TIMA_IRQHandler,
        [105] = HRTIM1_TIMB_IRQHandler,
        [106] = HRTIM1_TIMC_IRQHandler,
        [107] = HRTIM1_TIMD_IRQHandler,
        [108] = HRTIM1_TIME_IRQHandler,
        [109] = HRTIM1_FLT_IRQHandler,
        [110] = DFSDM1_FLT0_IRQHandler,
        [112] = DFSDM1_FLT1_IRQHandler,
        [113] = DFSDM1_FLT2_IRQHandler,
        [114] = DFSDM1_FLT3_IRQHandler,
        [115] = SAI3_IRQHandler,
        [116] = SWPMI1_IRQHandler,
        [117] = TIM15_IRQHandler,
        [118] = TIM16_IRQHandler,
        [119] = TIM17_IRQHandler,
        [120] = MDIOS_WKUP_IRQHandler,
        [122] = MDIOS_IRQHandler,
        [123] = JPEG_IRQHandler,
        [124] = MDMA_IRQHandler,
//        [125] = 0                                 /* Reserved                    */
        [126] = SDMMC2_IRQHandler,
        [127] = HSEM1_IRQHandler,
//        [128] = 0                                 /* Reserved                    */
        [129] = ADC3_IRQHandler,
        [130] = DMAMUX2_OVR_IRQHandler,
        [131] = BDMA_Channel0_IRQHandler,
        [132] = BDMA_Channel1_IRQHandler,
        [133] = BDMA_Channel2_IRQHandler,
        [134] = BDMA_Channel3_IRQHandler,
        [135] = BDMA_Channel4_IRQHandler,
        [136] = BDMA_Channel5_IRQHandler,
        [137] = BDMA_Channel6_IRQHandler,
        [138] = BDMA_Channel7_IRQHandler,
        [139] = COMP1_IRQHandler,
        [140] = LPTIM2_IRQHandler,
        [141] = LPTIM3_IRQHandler,
        [142] = LPTIM4_IRQHandler,
        [143] = LPTIM5_IRQHandler,
        [144] = LPUART1_IRQHandler,
//        [145] = 0                                 /* Reserved                   */
        [146] = CRS_IRQHandler,
        [147] = ECC_IRQHandler,
        [148] = SAI4_IRQHandler,
//        [149] = 0                                 /* Reserved                   */
//        [150] = 0                                 /* Reserved                   */
        [151] = WAKEUP_PIN_IRQHandler,
    }
};