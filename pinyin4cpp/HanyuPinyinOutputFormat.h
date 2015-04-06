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
