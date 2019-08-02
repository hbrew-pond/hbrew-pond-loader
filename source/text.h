#pragma once
#include "common.h"
#include "language.h"

void textInit(void);
void textExit(void);
int textGetLang(void);
const char* textGetString(StrId id);
void textSetColor(u32 color);
float textCalcWidth(const char* text);
void textDraw(float x, float y, float scaleX, float scaleY, bool baseline, const char* text);
void textDrawInBox(const char* text, int orientation, float scaleX, float scaleY, float baseline, float left, float right);
