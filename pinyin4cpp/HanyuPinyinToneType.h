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

#ifndef HANYUPINYINTONETYPE_H
#define HANYUPINYINTONETYPE_H
#include <QString>

/**
 * The option indicates that hanyu pinyin is outputted with tone numbers
 */
const QString HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_NUMBER = "WITH_TONE_NUMBER";
/**
 * The option indicates that hanyu pinyin is outputted without tone numbers
 * or tone marks
 */
const QString HAN_YU_PIN_YIN_TONE_TYPE_WITHOUT_TONE = "WITHOUT_TONE";
/**
 * The option indicates that hanyu pinyin is outputted with tone marks
 */
const QString HAN_YU_PIN_YIN_TONE_TYPE_WITH_TONE_MARK ="WITH_TONE_MARK";

class HanyuPinyinToneType{
public:

    HanyuPinyinToneType();
    static HanyuPinyinToneType *WITH_TONE_NUMBER;
    static HanyuPinyinToneType *WITHOUT_TONE;
    static HanyuPinyinToneType *WITH_TONE_MARK;
    QString getName();
protected:
    HanyuPinyinToneType(QString name);
    void setName(QString name);
private:
    QString name;
};

#endif // HANYUPINYINTONETYPE_H
