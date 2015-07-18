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

#ifndef HANYUPINYINCASETYPE_H
#define HANYUPINYINCASETYPE_H
#include<QString>

/**
* The option indicates that hanyu pinyin is outputted as uppercase letters
*/
  static const QString HAN_YU_PIN_YIN_CASE_TYPE_UPPERCASE = "UPPERCASE";

/**
* The option indicates that hanyu pinyin is outputted as lowercase letters
*/
   static QString HAN_YU_PIN_YIN_CASE_TYPE_LOWERCASE = "LOWERCASE";

class HanyuPinyinCaseType{
public:
    HanyuPinyinCaseType();
    HanyuPinyinCaseType(QString name);
    QString getName();
    void setName(QString name);
private:
    QString name;
};

#endif // HANYUPINYINCASETYPE_H
