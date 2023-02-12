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
void sysSetCartOwner__extern(bool arm9) asm("sysSetCartOwner__extern");
void sysSetCartOwner__extern(bool arm9) { return sysSetCartOwner(arm9); }
void sysSetCardOwner__extern(bool arm9) asm("sysSetCardOwner__extern");
void sysSetCardOwner__extern(bool arm9) { return sysSetCardOwner(arm9); }
void sysSetBusOwners__extern(bool arm9rom, bool arm9card) asm("sysSetBusOwners__extern");
void sysSetBusOwners__extern(bool arm9rom, bool arm9card) { return sysSetBusOwners(arm9rom, arm9card); }
void SetYtrigger__extern(int Yvalue) asm("SetYtrigger__extern");
void SetYtrigger__extern(int Yvalue) { return SetYtrigger(Yvalue); }
bool isDSiMode__extern(void) asm("isDSiMode__extern");
bool isDSiMode__extern() { return isDSiMode(); }
void lcdSwap__extern(void) asm("lcdSwap__extern");
void lcdSwap__extern() { return lcdSwap(); }
void lcdMainOnTop__extern(void) asm("lcdMainOnTop__extern");
void lcdMainOnTop__extern() { return lcdMainOnTop(); }
void lcdMainOnBottom__extern(void) asm("lcdMainOnBottom__extern");
void lcdMainOnBottom__extern() { return lcdMainOnBottom(); }
void systemShutDown__extern(void) asm("systemShutDown__extern");
void systemShutDown__extern() { return systemShutDown(); }
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
void vramSetBankA__extern(VRAM_A_TYPE a) asm("vramSetBankA__extern");
void vramSetBankA__extern(VRAM_A_TYPE a) { return vramSetBankA(a); }
void vramSetBankB__extern(VRAM_B_TYPE b) asm("vramSetBankB__extern");
void vramSetBankB__extern(VRAM_B_TYPE b) { return vramSetBankB(b); }
void vramSetBankC__extern(VRAM_C_TYPE c) asm("vramSetBankC__extern");
void vramSetBankC__extern(VRAM_C_TYPE c) { return vramSetBankC(c); }
void vramSetBankD__extern(VRAM_D_TYPE d) asm("vramSetBankD__extern");
void vramSetBankD__extern(VRAM_D_TYPE d) { return vramSetBankD(d); }
void vramSetBankE__extern(VRAM_E_TYPE e) asm("vramSetBankE__extern");
void vramSetBankE__extern(VRAM_E_TYPE e) { return vramSetBankE(e); }
void vramSetBankF__extern(VRAM_F_TYPE f) asm("vramSetBankF__extern");
void vramSetBankF__extern(VRAM_F_TYPE f) { return vramSetBankF(f); }
void vramSetBankG__extern(VRAM_G_TYPE g) asm("vramSetBankG__extern");
void vramSetBankG__extern(VRAM_G_TYPE g) { return vramSetBankG(g); }
void vramSetBankH__extern(VRAM_H_TYPE h) asm("vramSetBankH__extern");
void vramSetBankH__extern(VRAM_H_TYPE h) { return vramSetBankH(h); }
void vramSetBankI__extern(VRAM_I_TYPE i) asm("vramSetBankI__extern");
void vramSetBankI__extern(VRAM_I_TYPE i) { return vramSetBankI(i); }
void videoSetMode__extern(u32 mode) asm("videoSetMode__extern");
void videoSetMode__extern(u32 mode) { return videoSetMode(mode); }
void videoSetModeSub__extern(u32 mode) asm("videoSetModeSub__extern");
void videoSetModeSub__extern(u32 mode) { return videoSetModeSub(mode); }
int videoGetMode__extern(void) asm("videoGetMode__extern");
int videoGetMode__extern() { return videoGetMode(); }
int videoGetModeSub__extern(void) asm("videoGetModeSub__extern");
int videoGetModeSub__extern() { return videoGetModeSub(); }
bool video3DEnabled__extern(void) asm("video3DEnabled__extern");
bool video3DEnabled__extern() { return video3DEnabled(); }
void videoBgEnable__extern(int number) asm("videoBgEnable__extern");
void videoBgEnable__extern(int number) { return videoBgEnable(number); }
void videoBgEnableSub__extern(int number) asm("videoBgEnableSub__extern");
void videoBgEnableSub__extern(int number) { return videoBgEnableSub(number); }
void videoBgDisable__extern(int number) asm("videoBgDisable__extern");
void videoBgDisable__extern(int number) { return videoBgDisable(number); }
void videoBgDisableSub__extern(int number) asm("videoBgDisableSub__extern");
void videoBgDisableSub__extern(int number) { return videoBgDisableSub(number); }
void setBackdropColor__extern(const u16 color) asm("setBackdropColor__extern");
void setBackdropColor__extern(const u16 color) { return setBackdropColor(color); }
void setBackdropColorSub__extern(const u16 color) asm("setBackdropColorSub__extern");
void setBackdropColorSub__extern(const u16 color) { return setBackdropColorSub(color); }
void bgSetRotate__extern(int id, int angle) asm("bgSetRotate__extern");
void bgSetRotate__extern(int id, int angle) { return bgSetRotate(id, angle); }
void bgRotate__extern(int id, int angle) asm("bgRotate__extern");
void bgRotate__extern(int id, int angle) { return bgRotate(id, angle); }
void bgSet__extern(int id, int angle, s32 sx, s32 sy, s32 scrollX, s32 scrollY, s32 rotCenterX, s32 rotCenterY) asm("bgSet__extern");
void bgSet__extern(int id, int angle, s32 sx, s32 sy, s32 scrollX, s32 scrollY, s32 rotCenterX, s32 rotCenterY) { return bgSet(id, angle, sx, sy, scrollX, scrollY, rotCenterX, rotCenterY); }
void bgSetRotateScale__extern(int id, int angle, s32 sx, s32 sy) asm("bgSetRotateScale__extern");
void bgSetRotateScale__extern(int id, int angle, s32 sx, s32 sy) { return bgSetRotateScale(id, angle, sx, sy); }
void bgSetScale__extern(int id, s32 sx, s32 sy) asm("bgSetScale__extern");
void bgSetScale__extern(int id, s32 sx, s32 sy) { return bgSetScale(id, sx, sy); }
int bgInit__extern(int layer, BgType type, BgSize size, int mapBase, int tileBase) asm("bgInit__extern");
int bgInit__extern(int layer, BgType type, BgSize size, int mapBase, int tileBase) { return bgInit(layer, type, size, mapBase, tileBase); }
int bgInitSub__extern(int layer, BgType type, BgSize size, int mapBase, int tileBase) asm("bgInitSub__extern");
int bgInitSub__extern(int layer, BgType type, BgSize size, int mapBase, int tileBase) { return bgInitSub(layer, type, size, mapBase, tileBase); }
vuint16 * bgSetControlBits__extern(int id, u16 bits) asm("bgSetControlBits__extern");
vuint16 * bgSetControlBits__extern(int id, u16 bits) { return bgSetControlBits(id, bits); }
void bgClearControlBits__extern(int id, u16 bits) asm("bgClearControlBits__extern");
void bgClearControlBits__extern(int id, u16 bits) { return bgClearControlBits(id, bits); }
void bgWrapOn__extern(int id) asm("bgWrapOn__extern");
void bgWrapOn__extern(int id) { return bgWrapOn(id); }
void bgWrapOff__extern(int id) asm("bgWrapOff__extern");
void bgWrapOff__extern(int id) { return bgWrapOff(id); }
void bgSetPriority__extern(int id, unsigned int priority) asm("bgSetPriority__extern");
void bgSetPriority__extern(int id, unsigned int priority) { return bgSetPriority(id, priority); }
void bgSetMapBase__extern(int id, unsigned int base) asm("bgSetMapBase__extern");
void bgSetMapBase__extern(int id, unsigned int base) { return bgSetMapBase(id, base); }
void bgSetTileBase__extern(int id, unsigned int base) asm("bgSetTileBase__extern");
void bgSetTileBase__extern(int id, unsigned int base) { return bgSetTileBase(id, base); }
void bgSetScrollf__extern(int id, s32 x, s32 y) asm("bgSetScrollf__extern");
void bgSetScrollf__extern(int id, s32 x, s32 y) { return bgSetScrollf(id, x, y); }
void bgSetScroll__extern(int id, int x, int y) asm("bgSetScroll__extern");
void bgSetScroll__extern(int id, int x, int y) { return bgSetScroll(id, x, y); }
void bgMosaicEnable__extern(int id) asm("bgMosaicEnable__extern");
void bgMosaicEnable__extern(int id) { return bgMosaicEnable(id); }
void bgMosaicDisable__extern(int id) asm("bgMosaicDisable__extern");
void bgMosaicDisable__extern(int id) { return bgMosaicDisable(id); }
void bgSetMosaic__extern(unsigned int dx, unsigned int dy) asm("bgSetMosaic__extern");
void bgSetMosaic__extern(unsigned int dx, unsigned int dy) { return bgSetMosaic(dx, dy); }
void bgSetMosaicSub__extern(unsigned int dx, unsigned int dy) asm("bgSetMosaicSub__extern");
void bgSetMosaicSub__extern(unsigned int dx, unsigned int dy) { return bgSetMosaicSub(dx, dy); }
int bgGetPriority__extern(int id) asm("bgGetPriority__extern");
int bgGetPriority__extern(int id) { return bgGetPriority(id); }
int bgGetMapBase__extern(int id) asm("bgGetMapBase__extern");
int bgGetMapBase__extern(int id) { return bgGetMapBase(id); }
int bgGetTileBase__extern(int id) asm("bgGetTileBase__extern");
int bgGetTileBase__extern(int id) { return bgGetTileBase(id); }
u16 * bgGetMapPtr__extern(int id) asm("bgGetMapPtr__extern");
u16 * bgGetMapPtr__extern(int id) { return bgGetMapPtr(id); }
u16 * bgGetGfxPtr__extern(int id) asm("bgGetGfxPtr__extern");
u16 * bgGetGfxPtr__extern(int id) { return bgGetGfxPtr(id); }
void bgScrollf__extern(int id, s32 dx, s32 dy) asm("bgScrollf__extern");
void bgScrollf__extern(int id, s32 dx, s32 dy) { return bgScrollf(id, dx, dy); }
void bgScroll__extern(int id, int dx, int dy) asm("bgScroll__extern");
void bgScroll__extern(int id, int dx, int dy) { return bgScroll(id, dx, dy); }
void bgShow__extern(int id) asm("bgShow__extern");
void bgShow__extern(int id) { return bgShow(id); }
void bgHide__extern(int id) asm("bgHide__extern");
void bgHide__extern(int id) { return bgHide(id); }
void bgSetCenterf__extern(int id, s32 x, s32 y) asm("bgSetCenterf__extern");
void bgSetCenterf__extern(int id, s32 x, s32 y) { return bgSetCenterf(id, x, y); }
void bgSetCenter__extern(int id, int x, int y) asm("bgSetCenter__extern");
void bgSetCenter__extern(int id, int x, int y) { return bgSetCenter(id, x, y); }
void bgSetAffineMatrixScroll__extern(int id, int hdx, int vdx, int hdy, int vdy, int scrollx, int scrolly) asm("bgSetAffineMatrixScroll__extern");
void bgSetAffineMatrixScroll__extern(int id, int hdx, int vdx, int hdy, int vdy, int scrollx, int scrolly) { return bgSetAffineMatrixScroll(id, hdx, vdx, hdy, vdy, scrollx, scrolly); }
void bgExtPaletteEnable__extern(void) asm("bgExtPaletteEnable__extern");
void bgExtPaletteEnable__extern() { return bgExtPaletteEnable(); }
void bgExtPaletteEnableSub__extern(void) asm("bgExtPaletteEnableSub__extern");
void bgExtPaletteEnableSub__extern() { return bgExtPaletteEnableSub(); }
void bgExtPaletteDisable__extern(void) asm("bgExtPaletteDisable__extern");
void bgExtPaletteDisable__extern() { return bgExtPaletteDisable(); }
void bgExtPaletteDisableSub__extern(void) asm("bgExtPaletteDisableSub__extern");
void bgExtPaletteDisableSub__extern() { return bgExtPaletteDisableSub(); }
int32 divf32__extern(int32 num, int32 den) asm("divf32__extern");
int32 divf32__extern(int32 num, int32 den) { return divf32(num, den); }
int32 mulf32__extern(int32 a, int32 b) asm("mulf32__extern");
int32 mulf32__extern(int32 a, int32 b) { return mulf32(a, b); }
int32 sqrtf32__extern(int32 a) asm("sqrtf32__extern");
int32 sqrtf32__extern(int32 a) { return sqrtf32(a); }
int32 div32__extern(int32 num, int32 den) asm("div32__extern");
int32 div32__extern(int32 num, int32 den) { return div32(num, den); }
int32 mod32__extern(int32 num, int32 den) asm("mod32__extern");
int32 mod32__extern(int32 num, int32 den) { return mod32(num, den); }
int32 div64__extern(int64 num, int32 den) asm("div64__extern");
int32 div64__extern(int64 num, int32 den) { return div64(num, den); }
int32 mod64__extern(int64 num, int32 den) asm("mod64__extern");
int32 mod64__extern(int64 num, int32 den) { return mod64(num, den); }
u32 sqrt32__extern(int a) asm("sqrt32__extern");
u32 sqrt32__extern(int a) { return sqrt32(a); }
u32 sqrt64__extern(long long a) asm("sqrt64__extern");
u32 sqrt64__extern(long long a) { return sqrt64(a); }
void crossf32__extern(int32 *a, int32 *b, int32 *result) asm("crossf32__extern");
void crossf32__extern(int32 *a, int32 *b, int32 *result) { return crossf32(a, b, result); }
int32 dotf32__extern(int32 *a, int32 *b) asm("dotf32__extern");
int32 dotf32__extern(int32 *a, int32 *b) { return dotf32(a, b); }
void normalizef32__extern(int32 *a) asm("normalizef32__extern");
void normalizef32__extern(int32 *a) { return normalizef32(a); }
u32 POLY_ALPHA__extern(u32 n) asm("POLY_ALPHA__extern");
u32 POLY_ALPHA__extern(u32 n) { return POLY_ALPHA(n); }
u32 POLY_ID__extern(u32 n) asm("POLY_ID__extern");
u32 POLY_ID__extern(u32 n) { return POLY_ID(n); }
void glBegin__extern(GL_GLBEGIN_ENUM mode) asm("glBegin__extern");
void glBegin__extern(GL_GLBEGIN_ENUM mode) { return glBegin(mode); }
void glEnd__extern(void) asm("glEnd__extern");
void glEnd__extern() { return glEnd(); }
void glClearDepth__extern(fixed12d3 depth) asm("glClearDepth__extern");
void glClearDepth__extern(fixed12d3 depth) { return glClearDepth(depth); }
void glColor3b__extern(uint8 red, uint8 green, uint8 blue) asm("glColor3b__extern");
void glColor3b__extern(uint8 red, uint8 green, uint8 blue) { return glColor3b(red, green, blue); }
void glColor__extern(rgb color) asm("glColor__extern");
void glColor__extern(rgb color) { return glColor(color); }
void glVertex3v16__extern(v16 x, v16 y, v16 z) asm("glVertex3v16__extern");
void glVertex3v16__extern(v16 x, v16 y, v16 z) { return glVertex3v16(x, y, z); }
void glTexCoord2t16__extern(t16 u, t16 v) asm("glTexCoord2t16__extern");
void glTexCoord2t16__extern(t16 u, t16 v) { return glTexCoord2t16(u, v); }
void glPushMatrix__extern(void) asm("glPushMatrix__extern");
void glPushMatrix__extern() { return glPushMatrix(); }
void glPopMatrix__extern(int num) asm("glPopMatrix__extern");
void glPopMatrix__extern(int num) { return glPopMatrix(num); }
void glRestoreMatrix__extern(int index) asm("glRestoreMatrix__extern");
void glRestoreMatrix__extern(int index) { return glRestoreMatrix(index); }
void glStoreMatrix__extern(int index) asm("glStoreMatrix__extern");
void glStoreMatrix__extern(int index) { return glStoreMatrix(index); }
void glScalev__extern(const GLvector *v) asm("glScalev__extern");
void glScalev__extern(const GLvector *v) { return glScalev(v); }
void glTranslatev__extern(const GLvector *v) asm("glTranslatev__extern");
void glTranslatev__extern(const GLvector *v) { return glTranslatev(v); }
void glTranslatef32__extern(int x, int y, int z) asm("glTranslatef32__extern");
void glTranslatef32__extern(int x, int y, int z) { return glTranslatef32(x, y, z); }
void glScalef32__extern(int x, int y, int z) asm("glScalef32__extern");
void glScalef32__extern(int x, int y, int z) { return glScalef32(x, y, z); }
void glLight__extern(int id, rgb color, v10 x, v10 y, v10 z) asm("glLight__extern");
void glLight__extern(int id, rgb color, v10 x, v10 y, v10 z) { return glLight(id, color, x, y, z); }
void glNormal__extern(u32 normal) asm("glNormal__extern");
void glNormal__extern(u32 normal) { return glNormal(normal); }
void glLoadIdentity__extern(void) asm("glLoadIdentity__extern");
void glLoadIdentity__extern() { return glLoadIdentity(); }
void glMatrixMode__extern(GL_MATRIX_MODE_ENUM mode) asm("glMatrixMode__extern");
void glMatrixMode__extern(GL_MATRIX_MODE_ENUM mode) { return glMatrixMode(mode); }
void glViewport__extern(uint8 x1, uint8 y1, uint8 x2, uint8 y2) asm("glViewport__extern");
void glViewport__extern(uint8 x1, uint8 y1, uint8 x2, uint8 y2) { return glViewport(x1, y1, x2, y2); }
void glFlush__extern(u32 mode) asm("glFlush__extern");
void glFlush__extern(u32 mode) { return glFlush(mode); }
void glMaterialShinyness__extern(void) asm("glMaterialShinyness__extern");
void glMaterialShinyness__extern() { return glMaterialShinyness(); }
void glCallList__extern(const u32 *list) asm("glCallList__extern");
void glCallList__extern(const u32 *list) { return glCallList(list); }
void glPolyFmt__extern(u32 params) asm("glPolyFmt__extern");
void glPolyFmt__extern(u32 params) { return glPolyFmt(params); }
void glEnable__extern(int bits) asm("glEnable__extern");
void glEnable__extern(int bits) { return glEnable(bits); }
void glDisable__extern(int bits) asm("glDisable__extern");
void glDisable__extern(int bits) { return glDisable(bits); }
void glFogShift__extern(int shift) asm("glFogShift__extern");
void glFogShift__extern(int shift) { return glFogShift(shift); }
void glFogOffset__extern(int offset) asm("glFogOffset__extern");
void glFogOffset__extern(int offset) { return glFogOffset(offset); }
void glFogColor__extern(uint8 red, uint8 green, uint8 blue, uint8 alpha) asm("glFogColor__extern");
void glFogColor__extern(uint8 red, uint8 green, uint8 blue, uint8 alpha) { return glFogColor(red, green, blue, alpha); }
void glFogDensity__extern(int index, int density) asm("glFogDensity__extern");
void glFogDensity__extern(int index, int density) { return glFogDensity(index, density); }
void glLoadMatrix4x4__extern(const m4x4 *m) asm("glLoadMatrix4x4__extern");
void glLoadMatrix4x4__extern(const m4x4 *m) { return glLoadMatrix4x4(m); }
void glLoadMatrix4x3__extern(const m4x3 *m) asm("glLoadMatrix4x3__extern");
void glLoadMatrix4x3__extern(const m4x3 *m) { return glLoadMatrix4x3(m); }
void glMultMatrix4x4__extern(const m4x4 *m) asm("glMultMatrix4x4__extern");
void glMultMatrix4x4__extern(const m4x4 *m) { return glMultMatrix4x4(m); }
void glMultMatrix4x3__extern(const m4x3 *m) asm("glMultMatrix4x3__extern");
void glMultMatrix4x3__extern(const m4x3 *m) { return glMultMatrix4x3(m); }
void glMultMatrix3x3__extern(const m3x3 *m) asm("glMultMatrix3x3__extern");
void glMultMatrix3x3__extern(const m3x3 *m) { return glMultMatrix3x3(m); }
void glRotateXi__extern(int angle) asm("glRotateXi__extern");
void glRotateXi__extern(int angle) { return glRotateXi(angle); }
void glRotateYi__extern(int angle) asm("glRotateYi__extern");
void glRotateYi__extern(int angle) { return glRotateYi(angle); }
void glRotateZi__extern(int angle) asm("glRotateZi__extern");
void glRotateZi__extern(int angle) { return glRotateZi(angle); }
void glOrthof32__extern(int left, int right, int bottom, int top, int zNear, int zFar) asm("glOrthof32__extern");
void glOrthof32__extern(int left, int right, int bottom, int top, int zNear, int zFar) { return glOrthof32(left, right, bottom, top, zNear, zFar); }
void gluLookAtf32__extern(int eyex, int eyey, int eyez, int lookAtx, int lookAty, int lookAtz, int upx, int upy, int upz) asm("gluLookAtf32__extern");
void gluLookAtf32__extern(int eyex, int eyey, int eyez, int lookAtx, int lookAty, int lookAtz, int upx, int upy, int upz) { return gluLookAtf32(eyex, eyey, eyez, lookAtx, lookAty, lookAtz, upx, upy, upz); }
void glFrustumf32__extern(int left, int right, int bottom, int top, int near, int far) asm("glFrustumf32__extern");
void glFrustumf32__extern(int left, int right, int bottom, int top, int near, int far) { return glFrustumf32(left, right, bottom, top, near, far); }
void gluPerspectivef32__extern(int fovy, int aspect, int zNear, int zFar) asm("gluPerspectivef32__extern");
void gluPerspectivef32__extern(int fovy, int aspect, int zNear, int zFar) { return gluPerspectivef32(fovy, aspect, zNear, zFar); }
void gluPickMatrix__extern(int x, int y, int width, int height, const int viewport [4]) asm("gluPickMatrix__extern");
void gluPickMatrix__extern(int x, int y, int width, int height, const int viewport [4]) { return gluPickMatrix(x, y, width, height, viewport); }
void glResetMatrixStack__extern(void) asm("glResetMatrixStack__extern");
void glResetMatrixStack__extern() { return glResetMatrixStack(); }
void glSetOutlineColor__extern(int id, rgb color) asm("glSetOutlineColor__extern");
void glSetOutlineColor__extern(int id, rgb color) { return glSetOutlineColor(id, color); }
void glSetToonTable__extern(const uint16 *table) asm("glSetToonTable__extern");
void glSetToonTable__extern(const uint16 *table) { return glSetToonTable(table); }
void glSetToonTableRange__extern(int start, int end, rgb color) asm("glSetToonTableRange__extern");
void glSetToonTableRange__extern(int start, int end, rgb color) { return glSetToonTableRange(start, end, color); }
void glGetFixed__extern(const GL_GET_ENUM param, int *f) asm("glGetFixed__extern");
void glGetFixed__extern(const GL_GET_ENUM param, int *f) { return glGetFixed(param, f); }
void glAlphaFunc__extern(int alphaThreshold) asm("glAlphaFunc__extern");
void glAlphaFunc__extern(int alphaThreshold) { return glAlphaFunc(alphaThreshold); }
void glCutoffDepth__extern(fixed12d3 wVal) asm("glCutoffDepth__extern");
void glCutoffDepth__extern(fixed12d3 wVal) { return glCutoffDepth(wVal); }
void glInit__extern(void) asm("glInit__extern");
void glInit__extern() { return glInit(); }
void glClearColor__extern(uint8 red, uint8 green, uint8 blue, uint8 alpha) asm("glClearColor__extern");
void glClearColor__extern(uint8 red, uint8 green, uint8 blue, uint8 alpha) { return glClearColor(red, green, blue, alpha); }
void glClearPolyID__extern(uint8 ID) asm("glClearPolyID__extern");
void glClearPolyID__extern(uint8 ID) { return glClearPolyID(ID); }
void glGetInt__extern(GL_GET_ENUM param, int *i) asm("glGetInt__extern");
void glGetInt__extern(GL_GET_ENUM param, int *i) { return glGetInt(param, i); }
void glVertex3f__extern(float x, float y, float z) asm("glVertex3f__extern");
void glVertex3f__extern(float x, float y, float z) { return glVertex3f(x, y, z); }
void glRotatef32__extern(float angle, int x, int y, int z) asm("glRotatef32__extern");
void glRotatef32__extern(float angle, int x, int y, int z) { return glRotatef32(angle, x, y, z); }
void glRotatef__extern(float angle, float x, float y, float z) asm("glRotatef__extern");
void glRotatef__extern(float angle, float x, float y, float z) { return glRotatef(angle, x, y, z); }
void glColor3f__extern(float r, float g, float b) asm("glColor3f__extern");
void glColor3f__extern(float r, float g, float b) { return glColor3f(r, g, b); }
void glScalef__extern(float x, float y, float z) asm("glScalef__extern");
void glScalef__extern(float x, float y, float z) { return glScalef(x, y, z); }
void glTranslatef__extern(float x, float y, float z) asm("glTranslatef__extern");
void glTranslatef__extern(float x, float y, float z) { return glTranslatef(x, y, z); }
void glNormal3f__extern(float x, float y, float z) asm("glNormal3f__extern");
void glNormal3f__extern(float x, float y, float z) { return glNormal3f(x, y, z); }
void glRotateX__extern(float angle) asm("glRotateX__extern");
void glRotateX__extern(float angle) { return glRotateX(angle); }
void glRotateY__extern(float angle) asm("glRotateY__extern");
void glRotateY__extern(float angle) { return glRotateY(angle); }
void glRotateZ__extern(float angle) asm("glRotateZ__extern");
void glRotateZ__extern(float angle) { return glRotateZ(angle); }
void glOrtho__extern(float left, float right, float bottom, float top, float zNear, float zFar) asm("glOrtho__extern");
void glOrtho__extern(float left, float right, float bottom, float top, float zNear, float zFar) { return glOrtho(left, right, bottom, top, zNear, zFar); }
void gluLookAt__extern(float eyex, float eyey, float eyez, float lookAtx, float lookAty, float lookAtz, float upx, float upy, float upz) asm("gluLookAt__extern");
void gluLookAt__extern(float eyex, float eyey, float eyez, float lookAtx, float lookAty, float lookAtz, float upx, float upy, float upz) { return gluLookAt(eyex, eyey, eyez, lookAtx, lookAty, lookAtz, upx, upy, upz); }
void glFrustum__extern(float left, float right, float bottom, float top, float near, float far) asm("glFrustum__extern");
void glFrustum__extern(float left, float right, float bottom, float top, float near, float far) { return glFrustum(left, right, bottom, top, near, far); }
void gluPerspective__extern(float fovy, float aspect, float zNear, float zFar) asm("gluPerspective__extern");
void gluPerspective__extern(float fovy, float aspect, float zNear, float zFar) { return gluPerspective(fovy, aspect, zNear, zFar); }
void glTexCoord2f__extern(float s, float t) asm("glTexCoord2f__extern");
void glTexCoord2f__extern(float s, float t) { return glTexCoord2f(s, t); }
void oamSetMosaic__extern(unsigned int dx, unsigned int dy) asm("oamSetMosaic__extern");
void oamSetMosaic__extern(unsigned int dx, unsigned int dy) { return oamSetMosaic(dx, dy); }
void oamSetMosaicSub__extern(unsigned int dx, unsigned int dy) asm("oamSetMosaicSub__extern");
void oamSetMosaicSub__extern(unsigned int dx, unsigned int dy) { return oamSetMosaicSub(dx, dy); }
void oamSetXY__extern(OamState *oam, int id, int x, int y) asm("oamSetXY__extern");
void oamSetXY__extern(OamState *oam, int id, int x, int y) { return oamSetXY(oam, id, x, y); }
void oamSetPriority__extern(OamState *oam, int id, int priority) asm("oamSetPriority__extern");
void oamSetPriority__extern(OamState *oam, int id, int priority) { return oamSetPriority(oam, id, priority); }
void oamSetPalette__extern(OamState *oam, int id, int palette) asm("oamSetPalette__extern");
void oamSetPalette__extern(OamState *oam, int id, int palette) { return oamSetPalette(oam, id, palette); }
void oamSetAlpha__extern(OamState *oam, int id, int alpha) asm("oamSetAlpha__extern");
void oamSetAlpha__extern(OamState *oam, int id, int alpha) { return oamSetAlpha(oam, id, alpha); }
void oamSetGfx__extern(OamState *oam, int id, SpriteSize size, SpriteColorFormat format, const void *gfxOffset) asm("oamSetGfx__extern");
void oamSetGfx__extern(OamState *oam, int id, SpriteSize size, SpriteColorFormat format, const void *gfxOffset) { return oamSetGfx(oam, id, size, format, gfxOffset); }
void oamSetAffineIndex__extern(OamState *oam, int id, int affineIndex, bool sizeDouble) asm("oamSetAffineIndex__extern");
void oamSetAffineIndex__extern(OamState *oam, int id, int affineIndex, bool sizeDouble) { return oamSetAffineIndex(oam, id, affineIndex, sizeDouble); }
void oamSetHidden__extern(OamState *oam, int id, bool hide) asm("oamSetHidden__extern");
void oamSetHidden__extern(OamState *oam, int id, bool hide) { return oamSetHidden(oam, id, hide); }
void oamSetFlip__extern(OamState *oam, int id, bool hflip, bool vflip) asm("oamSetFlip__extern");
void oamSetFlip__extern(OamState *oam, int id, bool hflip, bool vflip) { return oamSetFlip(oam, id, hflip, vflip); }
void oamSetMosaicEnabled__extern(OamState *oam, int id, bool mosaic) asm("oamSetMosaicEnabled__extern");
void oamSetMosaicEnabled__extern(OamState *oam, int id, bool mosaic) { return oamSetMosaicEnabled(oam, id, mosaic); }
void oamClearSprite__extern(OamState *oam, int index) asm("oamClearSprite__extern");
void oamClearSprite__extern(OamState *oam, int index) { return oamClearSprite(oam, index); }
void oamAffineTransformation__extern(OamState *oam, int rotId, int hdx, int hdy, int vdx, int vdy) asm("oamAffineTransformation__extern");
void oamAffineTransformation__extern(OamState *oam, int rotId, int hdx, int hdy, int vdx, int vdy) { return oamAffineTransformation(oam, rotId, hdx, hdy, vdx, vdy); }
void windowEnable__extern(WINDOW w) asm("windowEnable__extern");
void windowEnable__extern(WINDOW w) { return windowEnable(w); }
void windowDisable__extern(WINDOW w) asm("windowDisable__extern");
void windowDisable__extern(WINDOW w) { return windowDisable(w); }
void windowEnableSub__extern(WINDOW w) asm("windowEnableSub__extern");
void windowEnableSub__extern(WINDOW w) { return windowEnableSub(w); }
void windowDisableSub__extern(WINDOW w) asm("windowDisableSub__extern");
void windowDisableSub__extern(WINDOW w) { return windowDisableSub(w); }
mm_word mmReverbBufferSize__extern(mm_word bit_depth, mm_word sampling_rate, mm_word delay) asm("mmReverbBufferSize__extern");
mm_word mmReverbBufferSize__extern(mm_word bit_depth, mm_word sampling_rate, mm_word delay) { return mmReverbBufferSize(bit_depth, sampling_rate, delay); }
