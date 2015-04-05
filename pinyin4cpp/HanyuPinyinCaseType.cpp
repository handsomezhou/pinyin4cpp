#include "HanyuPinyinCaseType.h"

HanyuPinyinCaseType::HanyuPinyinCaseType()
{
    this->setName(HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE);
}

HanyuPinyinCaseType::HanyuPinyinCaseType(QString name)
{
    this->setName(name);
}

QString HanyuPinyinCaseType::getName()
{
    return this->name;
}

void HanyuPinyinCaseType::setName(QString name)
{
    this->name=name;
}
