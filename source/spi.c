
//void SPITransaction(SPI_TypeDef* dev, uint8_t* in, uint8_t* out, uint8_t len) {
//    GPIOSetLow(GPIOA, GPIO_PIN_4);
//    uint8_t pos = 0;
//    while(len) {
//        SPITransmitData(dev, out[pos]);
//
//        while (!SPITransmitEmpty(SPI1)) {};
//        while (!SPIReceiveNotEmpty(SPI1)) {};
//
//        in[pos] = SPIReceivedData(dev);
//
//        len--;
//        pos++;
//    }
//    GPIOSetHigh(GPIOA, GPIO_PIN_4);
//}


