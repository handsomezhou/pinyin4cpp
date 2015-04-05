#include "HanyuPinyinVCharType.h"

HanyuPinyinVCharType::HanyuPinyinVCharType(){
    setName(HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_AND_COLON);
}

HanyuPinyinVCharType::HanyuPinyinVCharType(QString name){
    setName(name);
}

QString HanyuPinyinVCharType::getName()
{
   return this->name;
}

void HanyuPinyinVCharType::setName(QString name)
{
    this->name=name;
}
