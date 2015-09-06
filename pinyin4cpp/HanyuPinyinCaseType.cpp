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

#include "HanyuPinyinCaseType.h"

HanyuPinyinCaseType* HanyuPinyinCaseType::UPPERCASE=new HanyuPinyinCaseType(HAN_YU_PIN_YIN_CASE_TYPE_UPPERCASE);
HanyuPinyinCaseType* HanyuPinyinCaseType::LOWERCASE=new HanyuPinyinCaseType(HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE);

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
