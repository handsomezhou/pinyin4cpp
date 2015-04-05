#include "HanyuPinyinOutputFormat.h"

HanyuPinyinOutputFormat::HanyuPinyinOutputFormat():vCharType(),caseType(),toneType()
{
    this->restoreDefault();
}

void HanyuPinyinOutputFormat::restoreDefault()
{
   this->getVCharType().setName(HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_AND_COLON);
   this->getCaseType().setName(HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE);
   this->getToneType().setName(HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_NUMBER);
}

HanyuPinyinVCharType HanyuPinyinOutputFormat::getVCharType()
{
    return this->vCharType;
}

void HanyuPinyinOutputFormat::setVCharType(HanyuPinyinVCharType charType)
{
    this->vCharType=charType;
}

HanyuPinyinCaseType HanyuPinyinOutputFormat::getCaseType()
{
    return this->caseType;
}

void HanyuPinyinOutputFormat::setCaseType(HanyuPinyinCaseType caseType)
{
    this->caseType=caseType;
}

HanyuPinyinToneType HanyuPinyinOutputFormat::getToneType()
{
    return this->toneType;
}

void HanyuPinyinOutputFormat::setToneType(HanyuPinyinToneType toneType)
{
    this->toneType=toneType;
}
