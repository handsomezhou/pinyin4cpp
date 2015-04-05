#include "HanyuPinyinToneType.h"

HanyuPinyinToneType::HanyuPinyinToneType()
{
    this->setName(HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_NUMBER);
}

HanyuPinyinToneType::HanyuPinyinToneType(QString name)
{
    this->setName(name);
}

QString HanyuPinyinToneType::getName()
{
    return this->name;
}

void HanyuPinyinToneType::setName(QString name)
{
    this->name=name;
}

