/*
 * Copyright 2015 handsomezhou & Li Min
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#include "HanyuPinyinVCharType.h"

HanyuPinyinVCharType* HanyuPinyinVCharType::WITH_U_AND_COLON=new HanyuPinyinVCharType(HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_AND_COLON);
HanyuPinyinVCharType* HanyuPinyinVCharType::WITH_U_UNICODE=new HanyuPinyinVCharType(HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_U_UNICODE);
HanyuPinyinVCharType* HanyuPinyinVCharType::WITH_V=new HanyuPinyinVCharType(HAN_YU_PIN_YIN_V_CHAR_TYPE_WITH_V);

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
