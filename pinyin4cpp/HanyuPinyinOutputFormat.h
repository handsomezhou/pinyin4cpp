#ifndef HANYUPINYINOUTPUTFORMAT_H
#define HANYUPINYINOUTPUTFORMAT_H
#include "HanyuPinyinVCharType.h"
#include "HanyuPinyinCaseType.h"
#include "HanyuPinyinToneType.h"

class HanyuPinyinOutputFormat{
public:
    HanyuPinyinOutputFormat();
    void restoreDefault();
    HanyuPinyinVCharType getVCharType();
    void setVCharType(HanyuPinyinVCharType charType);
    HanyuPinyinCaseType getCaseType();
    void setCaseType(HanyuPinyinCaseType caseType);
    HanyuPinyinToneType getToneType();
    void  setToneType(HanyuPinyinToneType toneType);
private:
    HanyuPinyinVCharType vCharType;
    HanyuPinyinCaseType caseType;
    HanyuPinyinToneType toneType;

};

#endif // HANYUPINYINOUTPUTFORMAT_H
