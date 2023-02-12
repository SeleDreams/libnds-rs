void eepromWaitBusy__extern(void) asm("eepromWaitBusy__extern");
void eepromWaitBusy__extern() { return eepromWaitBusy(); }
void dmaCopyWords__extern(uint8 channel, const void *src, void *dest, uint32 size) asm("dmaCopyWords__extern");
void dmaCopyWords__extern(uint8 channel, const void *src, void *dest, uint32 size) { return dmaCopyWords(channel, src, dest, size); }
void dmaCopyHalfWords__extern(uint8 channel, const void *src, void *dest, uint32 size) asm("dmaCopyHalfWords__extern");
void dmaCopyHalfWords__extern(uint8 channel, const void *src, void *dest, uint32 size) { return dmaCopyHalfWords(channel, src, dest, size); }
void dmaCopy__extern(const void *source, void *dest, uint32 size) asm("dmaCopy__extern");
void dmaCopy__extern(const void *source, void *dest, uint32 size) { return dmaCopy(source, dest, size); }
void dmaCopyWordsAsynch__extern(uint8 channel, const void *src, void *dest, uint32 size) asm("dmaCopyWordsAsynch__extern");
void dmaCopyWordsAsynch__extern(uint8 channel, const void *src, void *dest, uint32 size) { return dmaCopyWordsAsynch(channel, src, dest, size); }
void dmaCopyHalfWordsAsynch__extern(uint8 channel, const void *src, void *dest, uint32 size) asm("dmaCopyHalfWordsAsynch__extern");
void dmaCopyHalfWordsAsynch__extern(uint8 channel, const void *src, void *dest, uint32 size) { return dmaCopyHalfWordsAsynch(channel, src, dest, size); }
void dmaCopyAsynch__extern(const void *source, void *dest, uint32 size) asm("dmaCopyAsynch__extern");
void dmaCopyAsynch__extern(const void *source, void *dest, uint32 size) { return dmaCopyAsynch(source, dest, size); }
void dmaFillWords__extern(u32 value, void *dest, uint32 size) asm("dmaFillWords__extern");
void dmaFillWords__extern(u32 value, void *dest, uint32 size) { return dmaFillWords(value, dest, size); }
void dmaFillHalfWords__extern(u16 value, void *dest, uint32 size) asm("dmaFillHalfWords__extern");
void dmaFillHalfWords__extern(u16 value, void *dest, uint32 size) { return dmaFillHalfWords(value, dest, size); }
int dmaBusy__extern(uint8 channel) asm("dmaBusy__extern");
int dmaBusy__extern(uint8 channel) { return dmaBusy(channel); }
int enterCriticalSection__extern(void) asm("enterCriticalSection__extern");
int enterCriticalSection__extern() { return enterCriticalSection(); }
void leaveCriticalSection__extern(int oldIME) asm("leaveCriticalSection__extern");
void leaveCriticalSection__extern(int oldIME) { return leaveCriticalSection(oldIME); }
void IPC_SendSync__extern(unsigned int sync) asm("IPC_SendSync__extern");
void IPC_SendSync__extern(unsigned int sync) { return IPC_SendSync(sync); }
int IPC_GetSync__extern(void) asm("IPC_GetSync__extern");
int IPC_GetSync__extern() { return IPC_GetSync(); }
void SetYtrigger__extern(int Yvalue) asm("SetYtrigger__extern");
void SetYtrigger__extern(int Yvalue) { return SetYtrigger(Yvalue); }
bool isDSiMode__extern(void) asm("isDSiMode__extern");
bool isDSiMode__extern() { return isDSiMode(); }
int readPowerManagement__extern(int reg) asm("readPowerManagement__extern");
int readPowerManagement__extern(int reg) { return readPowerManagement(reg); }
void powerOn__extern(int bits) asm("powerOn__extern");
void powerOn__extern(int bits) { return powerOn(bits); }
void powerOff__extern(PM_Bits bits) asm("powerOff__extern");
void powerOff__extern(PM_Bits bits) { return powerOff(bits); }
u16 timerTick__extern(int timer) asm("timerTick__extern");
u16 timerTick__extern(int timer) { return timerTick(timer); }
void timerUnpause__extern(int timer) asm("timerUnpause__extern");
void timerUnpause__extern(int timer) { return timerUnpause(timer); }
u32 timerTicks2usec__extern(u32 ticks) asm("timerTicks2usec__extern");
u32 timerTicks2usec__extern(u32 ticks) { return timerTicks2usec(ticks); }
u32 timerTicks2msec__extern(u32 ticks) asm("timerTicks2msec__extern");
u32 timerTicks2msec__extern(u32 ticks) { return timerTicks2msec(ticks); }
u16 timerFreqToTicks_1__extern(int freq) asm("timerFreqToTicks_1__extern");
u16 timerFreqToTicks_1__extern(int freq) { return timerFreqToTicks_1(freq); }
u16 timerFreqToTicks_64__extern(int freq) asm("timerFreqToTicks_64__extern");
u16 timerFreqToTicks_64__extern(int freq) { return timerFreqToTicks_64(freq); }
u16 timerFreqToTicks_256__extern(int freq) asm("timerFreqToTicks_256__extern");
u16 timerFreqToTicks_256__extern(int freq) { return timerFreqToTicks_256(freq); }
u16 timerFreqToTicks_1024__extern(int freq) asm("timerFreqToTicks_1024__extern");
u16 timerFreqToTicks_1024__extern(int freq) { return timerFreqToTicks_1024(freq); }
void fifoWaitValue32__extern(int channel) asm("fifoWaitValue32__extern");
void fifoWaitValue32__extern(int channel) { return fifoWaitValue32(channel); }
void SerialWaitBusy__extern(void) asm("SerialWaitBusy__extern");
void SerialWaitBusy__extern() { return SerialWaitBusy(); }
void micOn__extern(void) asm("micOn__extern");
void micOn__extern() { return micOn(); }
void micOff__extern(void) asm("micOff__extern");
void micOff__extern() { return micOff(); }
bool cdcIsAvailable__extern(void) asm("cdcIsAvailable__extern");
bool cdcIsAvailable__extern() { return cdcIsAvailable(); }
void i2cWaitBusy__extern(void) asm("i2cWaitBusy__extern");
void i2cWaitBusy__extern() { return i2cWaitBusy(); }
void sdmmc_nand_cid__extern(u32 *cid) asm("sdmmc_nand_cid__extern");
void sdmmc_nand_cid__extern(u32 *cid) { return sdmmc_nand_cid(cid); }
void sdmmc_sdcard_cid__extern(u32 *cid) asm("sdmmc_sdcard_cid__extern");
void sdmmc_sdcard_cid__extern(u32 *cid) { return sdmmc_sdcard_cid(cid); }
u16 sdmmc_read16__extern(u16 reg) asm("sdmmc_read16__extern");
u16 sdmmc_read16__extern(u16 reg) { return sdmmc_read16(reg); }
void sdmmc_write16__extern(u16 reg, u16 val) asm("sdmmc_write16__extern");
void sdmmc_write16__extern(u16 reg, u16 val) { return sdmmc_write16(reg, val); }
u32 sdmmc_read32__extern(u16 reg) asm("sdmmc_read32__extern");
u32 sdmmc_read32__extern(u16 reg) { return sdmmc_read32(reg); }
void sdmmc_write32__extern(u16 reg, u32 val) asm("sdmmc_write32__extern");
void sdmmc_write32__extern(u16 reg, u32 val) { return sdmmc_write32(reg, val); }
void sdmmc_mask16__extern(u16 reg, u16 clear, u16 set) asm("sdmmc_mask16__extern");
void sdmmc_mask16__extern(u16 reg, u16 clear, u16 set) { return sdmmc_mask16(reg, clear, set); }
void setckl__extern(u32 data) asm("setckl__extern");
void setckl__extern(u32 data) { return setckl(data); }
mm_word mmReverbBufferSize__extern(mm_word bit_depth, mm_word sampling_rate, mm_word delay) asm("mmReverbBufferSize__extern");
mm_word mmReverbBufferSize__extern(mm_word bit_depth, mm_word sampling_rate, mm_word delay) { return mmReverbBufferSize(bit_depth, sampling_rate, delay); }
