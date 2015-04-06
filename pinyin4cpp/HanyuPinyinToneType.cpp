/*
 * Copyright  [handsomezhou & Li Min] 2015 Convert Chinese characters to Pinyin.
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

